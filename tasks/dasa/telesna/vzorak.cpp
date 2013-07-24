#include<cstdio> //printf a scanf

int A[1000047],B[1000047],V[2000047]; //pole na prvu postupnost, druhu a vysledok

int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    scanf("%d",&m);
    for(int i=0; i<m; i++) scanf("%d",&B[i]);
    //premenna p1 udava zaciatok este nezadelenej casti v prvej postupnosti p2 v druhej
    //kam udava, na ktore miesto do V zapisujem
    int kam=0,p1=0,p2=0;
    while(p1!=n && p2!=m) {
        //mensi z prvych prvkov pojde na dalsie miesto
        if(A[p1]<B[p2]) V[kam++]=A[p1++];
        else V[kam++]=B[p2++];
    }
    //este pridam zvysne prvky
    //vsimnite si, ze vzdy sa jeden while ani raz neotoci
    while(p1!=n) V[kam++]=A[p1++];
    while(p2!=m) V[kam++]=B[p2++];
    for(int i=0; i<n+m-1; i++) printf("%d ",V[i]);
    printf("%d\n",V[n+m-1]);
}
