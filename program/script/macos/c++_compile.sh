# C++ Compile Shell Script

#!/bin/bash

clear
echo COMPILING...
g++ -Wall -o $1 $1.cpp -DDEBUG
if [ "$?" == 0 ]; then
	echo FINISHED
	echo ----------
	./$1
fi
