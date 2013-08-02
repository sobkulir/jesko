/*MAGIC!*/

#include <iostream>
#include <queue>

using namespace std;

// dobrym zvykom je vsetky klucove slova definovat niekde na zaciatku 
// programu, aby nespominat kazdykrat ci sa to pise s velkym pismenom,
// alebo ci ma nejaky riadok na konci bodku.
const string NEXT = "von";
const string MALO = "malo deti";

// prve funkcne riesenie. Pouzivame std::queue.
void main1(){
    int N, K;
    cin >> N >> K;

    queue<string> Q; // tymto simulujeme predsien

    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        // ak tento riadok je "von", tak sa pozriem ci je dost deti, a ak ano,
        // tak vyhodim z fronty K-1 deti, meno posledneho vypisem a tiez 
        // vyhodim.
        // ak tento vstupny riadok nie je "von", tak to musi byt meno, a teda
        // ho musim pridat do fronty.
        if(s != NEXT){ 
            Q.push(s);
        }
        else{
            if(Q.size() >= K){ // Q.size() je teda mnozstvo deti v predsieni
                               // v danu chvilu
                for(int j = 0; j < K-1; ++j) Q.pop(); // vyhodim K-1 deti
                
                cout << Q.front() << endl; // vypisem meno K-teho
                Q.pop(); // a tiez vyhodim
            }
            else cout << MALO << endl;
        }
    }
}

// druhe funkcne riesenie, je ale optimalnejsie.
//
// toto sa bude lisit tym, ze si budeme ukladat meno iba kazdeho k-teho
// ucastnika. Treba si vsimnut, ze vzdy davame mapu cloveku, poradie ktoreho
// je nasobkom K. A odoberame deti tiez vzdy po K kusoch. Cize mapu mame davat
// dietatu, spolu s ktorym je mnozstvo deti v predsieni delitelne K.
//
// Tymto znizime pamatovu zlozitost z O(N) na O(N/K), co je cool.
// Teraz je K male, ale kebyze je K porovnatelne velke s N, tak dostavame 
// pamatovu zlozitost O(1), co je megacool :)
void main2(){
    int N, K;
    cin >> N >> K;

    queue<string> Q; // fronta pre kazdeho k-teho
    int sedi = 0; // mnozstvo deti, ktore momentalne cakaju kym ich zavolaju
    
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        if(s != NEXT){
            ++sedi;
            if(sedi % K == 0) Q.push(s); // ak je to nasobok K
        }
        else{
            if(sedi >= K){
                cout << Q.front() << endl; Q.pop();
                sedi -= K;
            }
            else{
                cout << MALO << endl;
            }
        }
    }
}

int main(){
    main2();
}
