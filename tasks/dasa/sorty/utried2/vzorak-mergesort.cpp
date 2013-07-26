//Mergesort
#include<cstdio> //printf a scanf
#include<algorithm>
using namespace std;

int n; //pocet prvkov
int A[100047],B[100047]; //pole kam si budem ukladat vysledok a pomocne pole

//funkcia triediaca postupnost v poli A od indexu zac po index kon
//(index zac sa rata, index kon tam uz nepatri)
void mergesort(int zac, int kon) {
    //ak mam len jeden prvok nic nerobim
    if(zac+1==kon) return;
    //najdem index v strede, rozdelim na dve casti a kazdu z nich rekurzivne utriedim
    int stred=(zac+kon)/2;
    mergesort(zac,stred);
    mergesort(stred,kon);
    //potrebujem zmergovat tieto dve casti, medzivysledok si ukladam do B
    int p1=zac,p2=stred; //indexy na zaciatok este nezatriedenych indexov
    int kam=0; //kam to pojde do pola B
    while(p1!=stred && p2!=kon) {
        if(A[p1]<A[p2]) {B[kam]=A[p1]; p1++;}
        else {B[kam]=A[p2]; p2++;}
        kam++;
    }
    //zaradim zvysok
    while(p1!=stred) {B[kam]=A[p1]; p1++; kam++;}
    while(p2!=kon) {B[kam]=A[p2]; p2++; kam++;}
    //prepisem veci z B do A
    for(int i=0; i<kam; i++) A[zac+i]=B[i];
}

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    //utriedim
    mergesort(0,n);
    //vypisem vysledok
    for(int i=0; i<n-1; i++) printf("%d ",A[i]);
    printf("%d\n",A[n-1]);
}
