// v knižnici cstdio sú naprogramované funkcie na načítavanie vstupu a vypisovanie výstupu

// v knižnici algorithm je naprogramovaných veľa užitočných vunkcií, napríklad funkcia min,
// ktorá má dostane dve a vráti menšie z nich

#include<cstdio> //scanf, printf
#include<algorithm> // min

// vďaka nasledujúcemu príkazu môžeme miesto 'std::min' písať 'min'

using namespace std;


// verzia 3
// táto verzia funguje pre ľubovoľný (kladný) počet čísel na vstupe
//
// využijeme to, že pokiaľ funkcia uspeje pri načítavaní vstupu, 
// vráti kladné číslo (počet vecí čo práve prečítala)
// 
// takže while cyklus sa bude opakovať dovtedy, kým sa funkcii podarí načítavať čísla

int main(){
    int najmenej = 1000000, a;
    while(scanf("%d",&a)>0){ 
        najmenej = min(najmenej, a);
    }
    printf("%d\n",najmenej);
}
