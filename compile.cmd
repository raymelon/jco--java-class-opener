::
:: compile.cmd
:: Compiles jco.cpp to exe file
::
:: (c) August 2016 Raymel Francisco
::
@windres resource.rc -O coff -o resource.res
@g++ -m32 -o jco.exe jco.cpp resource.res
@pause
