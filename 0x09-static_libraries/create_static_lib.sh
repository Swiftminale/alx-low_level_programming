#!/bin/bash
gcc  -c *.c -o *.o
ar rcs libmy.a *.o
ranlib libmy.a
