gcc externalsrc.c main.c -o ctetris.exe
gcc -shared -o DLLTest/dynamicLib.dll DLLTest/dynamicLib.c
ctetris.exe
del /f ctetris.exe
del /f DLLTest/dynamicLib.dll 