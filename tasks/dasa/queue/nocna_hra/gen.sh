#! /bin/bash
for i in `seq 1 9`; do
    ./gen > "test/0$i.a.in"
    ./vzorak1 < "test/0$i.a.in" > "test/0$i.a.out"
done
