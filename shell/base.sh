#!/bin/bash

mode=$(cat ./.mode)

if test "$mode" = "cpp"; then
    cp -i _template/main.cpp ./main.cpp
fi
