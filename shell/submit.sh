#!/bin/bash

mode=$(cat ./.mode)

if test "$mode" = "cpp"; then
    oj s main.cpp
fi
