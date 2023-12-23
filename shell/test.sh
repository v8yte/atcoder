#!/bin/bash

mode=$(cat ./.mode)

if test "$mode" = "cpp"; then
    g++ -o main main.cpp
    oj t -c "./main"
    rm -f ./main
fi
