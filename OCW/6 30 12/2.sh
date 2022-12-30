#!/bin/bash
echo "PLS!Enter your birth date"
echo "Enter the date"
read date
echo "Enter the month"
read month
echo "Enter the year"
read year
sum=`expr $date + $month + $year`
value=`expr $sum % 2`

if [ $value == 0 ]
then
	echo "The sum of date,month and year is even "
else
    echo "The sum of date,month and year is odd"
fi