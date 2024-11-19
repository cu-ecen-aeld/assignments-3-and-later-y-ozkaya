#!/bin/bash

if [ $# -lt 2 ]
then
	echo "Invalid input!!!"
	exit 1
else
	echo "$2" > "$1"
        exit 0
fi

