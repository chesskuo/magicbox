# Java Compile Shell Script

#!/bin/bash

clear
echo COMPILING...
javac $1.java
if [ "$?" == 0 ]; then
	echo FINISHED
	echo ----------
	java $1
fi
