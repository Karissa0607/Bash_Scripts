#!/bin/bash
# The following is a script to build everything in this directory
# BUT instead you can just use 
# make myStrings
# make test_myStrings

gcc -c myStrings.c
gcc -c test_myStrings.c 
gcc -o test_myStrings test_myStrings.o myStrings.o

