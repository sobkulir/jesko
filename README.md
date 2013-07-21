jesko
=====

Repozitár pre úlohy a popisy na Jesennú školu KSP

Binarky
-------

Nechceme tu commitovat ziadne binarky - (`.bin` su je v `.gitignore`
ale to co klasicky vylezie z `make` sa tazko filtruje)

Pokial si neviete binarky ustrazit, mozete na linuxe pouzivat skript 
`clean.sh` ktory prida binarkam priponu `.bin`. 
Pre viac moznosti pouzite `./clean.sh help`

Pokial sa vam nechce pred kazdym commitovanim spustat `clean.sh`, pouzite namiesto commitovania 
`./autopush.sh` (ten zavola postupne `./clean rm`, `git add -A`, `git commit` a `git push`

(ak `clean.sh` a `autopush.sh` nie su u vas spustitelne, zafunguje `chmod 700 subor` 
