#!/bin/bash
#check if the user provided a file name
if [ -z "$1" ]; then
	echo "please provide a filename"
	exit 1
fi
# Check if the file exists
if [ ! -f "$1" ]; then
	echo "File not found: $1"
	exit
fi 
# Run indent with Betty-style options 
indent -kr -nut -i8 -ts8 -sob -180 -ss -ncs -cp1 "$1"
