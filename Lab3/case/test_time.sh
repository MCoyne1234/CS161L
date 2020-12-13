#!/bin/bash

for (( i=100; i<=30000; i+=100 ));
do
	(/usr/bin/time -f "%U\n"  ./prog1.out $i) 2>> prog1.txt
done
