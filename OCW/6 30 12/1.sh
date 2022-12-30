#!/bin/bash
echo "enter the no"
read num1

if [ $num1 == 888 ]
then
	echo "You are the first winner"
elif [ $num1 == 999 ]
then
    echo "You are the second winner"
else
	echo "Try for next time"
fi
