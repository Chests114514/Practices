#!/bin/bash

aControll() {
	echo "HELLO"
}
bControll() {
	echo "world"
}

while read -p "Input:" userInput
do
	if [ "$userInput" = "a" ]; then
		aControll
		elif [ "$userInput" = "b" ]; then
			bControll
		elif [ "$userInput" = "c" ]; then
			break
	fi
done
