#!/bin/bash

pdfcslatex $1
fname=$( basename $1 .tex )
oname=$fname
fname=$fname-$( echo -n "hura$fname" | md5sum | sed -e 's/ .*//' ).pdf
echo $fname $oname
mv $oname.pdf $fname
rm *aux
rm *log
mv *pdf zadania-web/
