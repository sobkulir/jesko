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

HELP=''
VERBOSE=''
INPUT=''
OUTPUT=''
TEMPLATE='yes'
while getopts hi:o:vt option; do
    case $option in
        h) HELP='yes';;
        i) INPUT=${OPTARG};;
        o) OUTPUT=${OPTARG};;
        v) VERBOSE='yes';;
        t) TEMPLATE='';;
    esac
done

if [ ! -z $HELP ]; then
    color $blue
    echo "Usage: $0 [-h] [-i <input file>] [-o <output file>] [-v] [<directories and files>]"
    echo   
    color
    exit
fi

if [ -z $INPUT ]; then

    file=.list.temp
    echo > $file

    for arg in $@; do
        if [[ "$arg" == -* ]]; then
            continue
        fi
        for x in `find $arg -name \*.tex`; do
            if [ `basename $x` != 'template.tex' ] || [ -z $TEMPLATE ]; then
                readlink -m $x >> $file
            fi
        done
    done
    cat $file | sort -V | uniq > uniq-$file
    mv uniq-$file $file
else
    file=$INPUT
fi


message "Compiling following files:"
logfile=.list.log
echo > $logfile
for x in `cat $file`; do
    echo $x
    echo ":::::::::::: $x :::::::::::" >> $logfile
    if [ ! -z $VERBOSE  ]; then
        color $red
        (cd `dirname $x`; pdfcslatex `basename $x`)
        color
    else
        (cd `dirname $x`; pdfcslatex `basename $x`) >> $logfile
    fi
done

echo `cat $file | sed -e 's/\.tex/\.pdf/'` > arg-$file
mv arg-$file $file

if [ -z $OUTPUT ]; then
    OUTPUT='result.pdf'
fi

message "Generating file '$OUTPUT'"
if [ `wc -w < $file` == 1 ]; then
    cp `cat $file` $OUTPUT.pdf
else
    pdfunite `cat $file` $OUTPUT
fi
if [ -z $INPUT ]; then
    rm $file
fi
rm $logfile
