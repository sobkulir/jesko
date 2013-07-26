#!/bin/bash

#{{{
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
    echo $@
    color
}
function error {
    color $red
    echo $@
    color
}
#}}}

#Usage:
if [[ $1 == help ]]; then
    color $blue
    echo "Použitie: $0 <xx-dir1> <xx-dir2> .. <xx-dirn>"
    echo
    echo "Vyrobí priečinky a poposúva tie s kolidujúcim číslom."
    echo
    color
    exit
fi

function plusone {
    val=`echo $1 + 1 | bc`
    if [[ "$val" == ? ]]; then
        val=0$val
    fi 
    echo $val
}

for arg in $@; do
    dir=`dirname $arg`/
    file=`basename $arg`
    num=${file%%-*}
    list=''
    while true; do
        if [ -z "`find $dir -name $num-*`" ]; then
            break
        fi
        list="$num $list"
        num=`plusone $num`
    done
    for x in $list; do
        y=`plusone $x`
        if [ ! -z "`find $dir -name $x-*`" ]; then
            for from in $dir$x-*; do
                from=`basename $from`
                to=$y-${from#*-}
                message "Rename: $from -> $to"
                mv $dir$from $dir$to
            done
        fi
    done
    mkdir $arg
done
    
