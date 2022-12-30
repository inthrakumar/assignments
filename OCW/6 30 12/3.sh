#!/bin/
SUM=0
for a in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
do
    VALUE=`expr $a % 2`
    if [ $VALUE == 0 ]
    then
        SUM=`expr $SUM + $a`
    fi
done
echo "The sum  of even numbers from 1 to 20 is $SUM"