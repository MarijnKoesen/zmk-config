#!/bin/bash

set -e

cd "$(dirname "$0")/../"

compile() {
    cd /code/zmk
    echo "Building $1"

    west build -s app -d "/code/build/$1" -b "nice_nano_v2" -- -DZMK_CONFIG=/code/config -DSHIELD="$1" -DZMK_EXTRA_MODULES='/code/'
    cp /code/build/$1/zephyr/zmk.uf2 /code/$1.uf2
}


MULTITHREAD="false"
[[ -z $SHIELDS ]] && SHIELDS="$(grep '^[[:space:]]*shield:' build.yaml | sed 's/^.*: *//')"


if [[ $MULTITHREAD = "true" ]]; then
    i=1
    for shield in $(echo $SHIELDS | sed 's/,/ /g')
    do
        compile $shield &
        eval "T${i}=\${!}"
        eval "S${i}=\$shield"  # Store the board name in a corresponding variable
        ((i++))
    done

    echo "Starting $(($i - 1)) background threads:"
    for ((x=1; x<i; x++))
    do
        pid="T$x"
        wait "${!pid}"
        shield="S$x"  # Retrieve the board name from the corresponding variable
        echo -e "$(tput setaf 3)Thread $x with PID ${!pid} has finished: ${!shield}$(tput sgr0)"
    done
else
    for shield in $(echo $SHIELDS | sed 's/,/ /g')
    do
        compile $shield
    done
fi


