#!/bin/bash
for (( counter=1; counter<100; counter+=5))
    do
	echo "para x = $counter"
	./contention $counter 10000000
    done
     echo "ok"
     
