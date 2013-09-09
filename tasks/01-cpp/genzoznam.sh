echo -n "cat $1"
for x in `seq -w 27`; do
    oldname=`echo $x-* | sed -e 's/[^-]*-//'`
    echo -n '| sed -e '"'"'s/\\textbf{'$oldname'}'/'\\textbf{'cpp$x`cat $x-*/zadanie.tex | \
                     grep '\velkynadpis' | \
                     sed -e 's/.*{//' | \
                     sed -e's/\(.*\)}/(\1)/'`'}/g'"'"
done
echo '> temp'
