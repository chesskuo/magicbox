:: C++ Compile Batch File

@echo off

cls
echo COMPILING...
g++ -Wall -o %1 %1.cpp -DDBG
if %ERRORLEVEL% EQU 0 (
	echo FINISHED
	echo ----------
	%1.exe
)
