#!/bin/sh

cd "$(dirname "$0")/../"

keymap -c .keymap.config.yaml parse -c 10 -z config/cradio.keymap > keymap.yaml 
keymap -c .keymap.config.yaml draw keymap.yaml > keymap.svg
rm keymap.yaml 
