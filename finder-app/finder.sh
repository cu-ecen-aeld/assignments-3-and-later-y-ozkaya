#!/bin/bash
#
#script to search for specified file under the directory and number of lines having the specified search string


if [ $# -lt 2 ]
then
	echo "Number of inputs not valid!!"]
	exit 1

directory=$1
echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!mydir is ${directory}"
fi

if [ ! -d $1 ]
then
	echo "The directory does not exist!!!"
	exit 1
else
	number_of_files=$(find $1 -type f | wc -l)
	
	number_of_lines=$(grep -r -c $2 $1 | awk -F: '{sum += $2 } END  {print sum}')
	echo "The number of files are ${number_of_files} and the number of matching lines are ${number_of_lines}"
	exit 0
fi
