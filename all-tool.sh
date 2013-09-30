#!/bin/bash

red=1
green=148
blue=147
function color {
    if [ -n "$1" ]; then
        echo -e -n "\033[38;5;$1m"
    else
        echo -e -n "\033[39m"
    fi
}
function message {
    color $green
    echo $1
    color
}

message "generating tasksets"
./gen-tool.sh

message "generating pdf"
if [ ! -z $@ ]; then
    for arg in $@; do
        ./spc-tool.sh -o $arg.pdf $arg
    done
else
    ./spc-tool.sh -o tasks-01-cpp.pdf tasks/01-cpp
    ./spc-tool.sh -o tasks-02-sort.pdf tasks/02-sorty
    ./spc-tool.sh -o tasks-03-bsearch.pdf tasks/03-binsearch
    ./spc-tool.sh -o cook-00-cheatsheet cookbook/00-cpp-cheatsheet.tex
    ./spc-tool.sh -o cook-01-cpp.pdf cookbook/01-cpp
    ./spc-tool.sh -o cook-02-zlozitost cookbook/03-algoritmy/01-zlozitost.tex
    ./spc-tool.sh -o cook-03-sorty cookbook/03-algoritmy/02-sorty.tex
    ./spc-tool.sh -o 03-bsearch cookbook/03-algoritmy/03-binsearch.tex
    ./spc-tool.sh -o cookbook.pdf cookbook
    ./spc-tool.sh -o tasks.pdf tasks
fi
message uploading '->' jesko
scp tasks-*.pdf janoh@ksp.sk:/var/www/jesko/zadania
scp cook-*.pdf janoh@ksp.sk:/var/www/jesko/kucharka
message uploading '->' web
scp *.pdf janoh@ksp.sk:public_html/files/jeskopdf/
