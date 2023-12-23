#!/bin/bash

mode=$(cat ./.mode)
echo -n URL?
read q

if test "$mode" = "cpp"; then
    oj s $q main.cpp 
fi
