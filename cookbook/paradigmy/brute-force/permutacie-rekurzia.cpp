//rekurzivna funkcia tvoriaca permutacie
void permutacie(vector<int> nezaradene, vector<int> permutacia) {
    if(nezaradene.size()==0) {
        //už som zaradil všetky prvky, spravím niečo s výslednou permutáciou
        return ;
    }
    //postupne dám na ďalšie miesto každý prvok
    for(int i=0; i<nezaradene.size(); i++) {
        //v nove_nezaradene nie je prvok nezaradene[i]
        vector<int> nove_nezaradene;
        for(int j=0; j<i; j++) nove_nezaradene.push_back(nezaradene[j]);
        for(int j=i+1; j<nezaradene.size(); j++) nove_nezaradene.push_back(nezaradene[j]);
        //v nova_permutacia pribudne na koniec prvok nezaradene[i]
        vector<int> nova_permutacia = permutacia;
        nova_permutacia.push_back(nezaradene[i]);
        //rekurzivne sa zavolám
        permutacie(nove_nezaradene, nova_permutacia);
    }
}
