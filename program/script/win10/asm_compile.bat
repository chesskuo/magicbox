:: Assembly Compile Batch File

@echo off

cls
echo COMPILING...
ml /c /coff %1.asm
if %ERRORLEVEL% EQU 0 (
	link /SUBSYSTEM:CONSOLE %1.obj
	echo FINISHED
	echo ----------
	%1.exe
)
