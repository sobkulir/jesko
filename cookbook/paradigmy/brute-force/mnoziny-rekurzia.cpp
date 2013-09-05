//rekurzívna funkcia na generovanie množín
void mnoziny(vector<int> na_spracovanie, vector<int> mnozina) {
    if(na_spracovanie.size()) {
        //už som spracoval všetky prvky, v mnozina je ďašia množina, spracujem ju
        return ;
    }
    int x=na_spracovanie[0];
    //nove_na_spracovanie obsahuje všetky okrem prvého prvku, ktorý akurát spracujeme
    vector<int> nove_na_spracovanie;
    for(int i=1; i<na_spracovanie.size(); i++)
        nove_na_spracovanie.push_back(na_spracovanie[i]);
    //prvý prvok nezoberiem
    mnoziny(nove_na_spracovanie, mnozina);
    //vyberiem prvý prvok
    mnozina.push_back(x);
    mnoziny(nove_na_spracovanie, mnozina);
}
