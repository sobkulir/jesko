//Insersort
#include<cstdio> //printf a scanf
#include<algorithm> //funkcia swap
using namespace std;

int n; //pocet prvkov
int A[5047]; //pole kam si budem ukladat vysledok

int main(){
    scanf("%d",&n);
    //postupne nacitavam cisla a ukladam ich na spravne miesta
    for(int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);
        int kde=i; //kam patri cislo x
        while(kde!=0 && x<A[kde-1]) {swap(A[kde],A[kde-1]); kde--;}
        A[kde]=x;
    }
    //vypisem vysledok
    for(int i=0; i<n-1; i++) printf("%d ",A[i]);
    printf("%d\n",A[n-1]);
}
