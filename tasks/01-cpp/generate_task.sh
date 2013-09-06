

names=(meno.txt zadanie.txt vzorak.cpp 00.sample 01.a 01.b 01.c 01.d 01.e 01.f 01.g 01.h 01.i 01.j 01.k 01.l 01.m 01.n 01.o 01.p 01.q 01.r 01.s 01.t 01.u 01.v 01.w 01.x 01.y 01.z)

lastline=0
index=0

echo generate_task: setting up...

mkdir $2
cat $1 > $2/.temp~
cd $2

echo generate_task: spliting file...

for line in $(grep -n "@@@@@" .temp~ | awk -F":" '{print $1}'); do
	head -n $((line-lastline-1)) .temp~ > ${names[index]}
	tail -n +$((line-lastline+1)) .temp~ > .temp2~
	cat .temp2~ > .temp~
	lastline=$((line))
	index=$((index+1))
done

echo generate_task: compiling...

g++ vzorak.cpp -o vzorak

echo generate_task: setting input...

mkdir test
for file in 0*.* ; do
	mv $file ./test/$file.in
done

echo generate_task: generating output...

for file in ./test/*.in ; do
	./vzorak < $file > ${file/in}out
done

echo generate_task: generating statement ...

echo "\input ../../../include/include.tex >> zadanie.tex" > zadanie.tex
echo ""  >> zadanie.tex
echo "\begin{document}" >> zadanie.tex
echo ""  >> zadanie.tex
echo "\nadpis{" >> zadanie.tex
cat meno.txt >> zadanie.tex
echo "}"  >> zadanie.tex
echo ""  >> zadanie.tex
cat zadanie.txt >> zadanie.tex
echo ""  >> zadanie.tex
echo "\nadpis{Príklady}"  >> zadanie.tex
echo "\vstup" >> zadanie.tex
cat test/00.sample.in >> zadanie.tex
echo "\vystup"  >> zadanie.tex
cat test/00.sample.out >> zadanie.tex
echo "\koniec"  >> zadanie.tex
echo ""  >> zadanie.tex
echo "\end{document}"  >> zadanie.tex

echo generate_task: cleaning...

rm vzorak
rm meno.txt
rm .temp~
rm .temp2~
cd ..

echo generate_task: DONE

