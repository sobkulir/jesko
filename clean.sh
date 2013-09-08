#!/bin/bash


green=148
blue=147
function color {
    if [ -n "$1" ]; then
        echo -e -n "\033[38;5;$1m"
    else
        echo -e -n "\033[39m"
    fi
}

if [[ $1 == h* ]]; then
    color $blue
    echo "Usage: $0 [OPTION]"
    echo "       OPTION: <empty> -- mv binary binary.bin"
    echo "       OPTION: rm      -- rm binary"
    echo "       OPTION: rmbin   -- rm binary; rm binary.bin"
    echo "       OPTION: help    -- prints this help"
    color
    exit
fi

for x in `find . -not -name *.in -not -name *.out -not -name *.aux -not -name *.log`; do
    if [[ "$x" == ./.git* ]]; then continue; fi
    if [[ "$x" == *.pdf ]] || [[ "$x" == *.tex ]]; then continue; fi
    if [[ "$x" == *.in ]] || [[ "$x" == *.out ]]; then continue; fi
    if [[ "$x" == *.cpp ]] || [[ "$x" == *.cc ]]; then continue; fi
    #echo $x
    if file $x | grep -q "ELF"; then
        if [[ "$x" == *.bin ]]; then
            if [ "$1" == "rmbin" ]; then
                color $green
                echo "$x is .bin file -- rm $x"
                rm $x
                color
            else
                echo "$x is .bin file -- nothing done"
            fi
        else
            color $green 
            if [[ "$1" == rm* ]]; then
                echo "bad file: -- $1 $x"
                rm $x
            else
                echo "bad file -- mv $x $x.bin"
                mv $x $x.bin
            fi
            color
        fi
    fi
done

