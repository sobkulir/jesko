// v knižnici cstdio sú naprogramované funkcie na načítavanie vstupu a vypisovanie výstupu

#include<cstdio> //scanf, printf

// verzia 2
// táto verzia má výhodu, že program ľahko prerobíme 
// na hľadanie minima z ľubovoľného počtu čísel, nie len 5

int main(){
    int najmenej = 1000000, a; // viac ako 1000
    for(int i = 0; i<5; ++i){
        scanf("%d", &a);
        if (a<najmenej) najmenej = a;
    }
    printf("%d\n",najmenej);
}
