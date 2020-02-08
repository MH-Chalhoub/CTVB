@echo off
bison -dy %1
flex %2
gcc lex.yy.c y.tab.c -o %3
test