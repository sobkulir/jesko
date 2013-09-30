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

for x in tasks/*/metadata; do
    dir=`dirname $x`
    setname=`cat $x | grep 'set-name:' | sed -e 's/^set-name: //'`
    filename=$dir'/00-sada.tex'
    echo $dir : $setname
    (echo '% this file is generated automatically'; echo '\input ../../include/include.tex') > $filename
    (echo ; echo '\begin{document}') >> $filename
    echo '\velkynadpis{Začiatok sady - '$setname'}' >> $filename
    (echo; echo '\begin{itemize}') >> $filename
    prazdne='ano'
    for x in `find $dir/ -maxdepth 1 -type d | sort -V`; do
        name=`echo $x | sed -e 's/^.*\///' | sed -e 's/_/-/g'`
        if [ ! -z $name ]; then
            #echo $name
            echo '\item '$name >> $filename
            prazdne='nie'
        fi
    done
    if [ "$prazdne" == 'ano' ]; then
        echo '\item $<$Žiadne úlohy$>$' >> $filename
    fi
    (echo '\end{itemize}'; echo '\end{document}') >> $filename
done

