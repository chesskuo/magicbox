:: Java Compile Batch File

@echo off

cls
echo COMPILING...
javac %1.java
if %ERRORLEVEL% EQU 0 (
	echo FINISHED
	echo ----------
	java %1
)