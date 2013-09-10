#!/bin/sh

# $1 testdir
# $2 taskname
# $3 file.in
# $4 our_output.out
# $5 his_output.out

if "python3 $1/$2/checker.py" "$5" "$4" ; then exit 0; else exit 1; fi

