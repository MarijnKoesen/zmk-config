#!/bin/sh
# This requires: https://github.com/hnaderi/keymap-drawer/

cd "$(dirname "$0")/../"

keymap -c .keymap.config.ferris-sweep.yaml parse -c 10 -z config/cradio.keymap > keymap.ferris-sweep.yaml 
keymap -c .keymap.config.corne.yaml parse -c 10 -z config/corne.keymap > keymap.corne.yaml 
keymap -c .keymap.config.ferris-sweep.yaml draw keymap.ferris-sweep.yaml > keymap.ferris-sweep.svg
keymap -c .keymap.config.corne.yaml draw keymap.corne.yaml > keymap.corne.svg
rm keymap.ferris-sweep.yaml keymap.corne.yaml
