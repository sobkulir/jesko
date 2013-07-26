//Mergesort
#include<cstdio> //printf a scanf
#include<algorithm>
#include <cstdlib> //funkcia rand()
using namespace std;

int n; //pocet prvkov
int A[100047],B[100047]; //pole kam si budem ukladat vysledok a pomocne pole

//funkcia triediaca postupnost v poli A od indexu zac po index kon
//(index zac sa rata, index kon tam uz nepatri)
void quicksort(int zac, int kon) {
    //mam najviac jeden prvok
    if(zac+1>=kon) return;
    int pivot=A[zac+rand()%(kon-zac)]; //zvolim si pivota
    //idem z dvoch stran a prehadzujem prvky podla pivota
    //nalavo su prvky mensie rovne, napravo vacsie
    int p1=zac,p2=kon-1;
    while(p1<p2) {
        while(p1<kon && A[p1]<=pivot) p1++;
        while(p2>=zac && A[p2]>pivot) p2--;
        if(p1<p2) swap(A[p1],A[p2]);
    }
    while(p2>=zac && A[p2]==pivot) p2--;
    //zavolam sa rekurzivne
    quicksort(zac,p2+1);
    quicksort(p1,kon);
}

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    //utriedim
    quicksort(0,n);
    //vypisem vysledok
    for(int i=0; i<n-1; i++) printf("%d ",A[i]);
    printf("%d\n",A[n-1]);
}
