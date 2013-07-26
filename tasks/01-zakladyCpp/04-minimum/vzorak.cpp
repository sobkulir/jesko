// v knižnici cstdio sú naprogramované funkcie na načítavanie vstupu a vypisovanie výstupu

// v knižnici algorithm je naprogramovaných veľa užitočných vunkcií, napríklad funkcia min,
// ktorá má dostane dve a vráti menšie z nich

#include<cstdio> //scanf, printf
#include<algorithm> // min

// vďaka nasledujúcemu príkazu môžeme miesto 'std::min' písať 'min'

using namespace std;



// verzia 1
// táto verzia funguje pre práve 5 čísel. Zmeniť 5 na 20 by nás stálo veľa roboty

int main1(){
    int a,b,c,d,e, najmenej;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    najmenej = min( min(a,b), min( min(c,d), e));
    printf("%d\n",najmenej);
}



// verzia 2
// táto verzia má výhodu, že program ľahko prerobíme 
// na hľadanie minima z ľubovoľného počtu čísel, nie len 5

int main2(){
    int najmenej = 1000000, a; // viac ako 1000
    for(int i = 0; i<5; ++i){
        scanf("%d", &a);
        if (a<najmenej) najmenej = a;
    }
    printf("%d\n",najmenej);
}



// verzia 3
// táto verzia funguje pre ľubovoľný (kladný) počet čísel na vstupe
//
// využijeme to, že pokiaľ funkcia uspeje pri načítavaní vstupu, 
// vráti kladné číslo (počet vecí čo práve prečítala)
// 
// takže while cyklus sa bude opakovať dovtedy, kým sa funkcii podarí načítavať čísla

int main3(){
    int najmenej = 1000000, a;
    while(scanf("%d",&a)>0){ 
        najmenej = min(najmenej, a);
    }
    printf("%d\n",najmenej);
}



// spustíme tretiu verziu
int main(){
    main3();
}
