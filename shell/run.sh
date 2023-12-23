#!/bin/bash

mode=$(cat ./.mode)

if test "$mode" = "cpp"; then
    g++ -o main main.cpp
    ./main
    rm -f ./main
fi
