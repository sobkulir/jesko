// v knižnici cstdio sú naprogramované funkcie na načítavanie vstupu a vypisovanie výstupu

// v knižnici algorithm je naprogramovaných veľa užitočných vunkcií, napríklad funkcia min,
// ktorá má dostane dve a vráti menšie z nich

#include<cstdio> //scanf, printf
#include<algorithm> // min

// vďaka nasledujúcemu príkazu môžeme miesto 'std::min' písať 'min'

using namespace std;


// verzia 1
// táto verzia funguje pre práve 5 čísel. Zmeniť 5 na 20 by nás stálo veľa roboty

int main(){
    int a,b,c,d,e, najmenej;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    najmenej = min( min(a,b), min( min(c,d), e ));
    printf("%d\n",najmenej);
}
