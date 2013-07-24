#include<cstdio> //printf a scanf

int n,p; //pocet jablcok a optimalny vek
int V[3][1000047]; //pole na ulozenie vysledku
int P[3]; //pocty prvkov vo vysledku v danej kategorii

int main(){
    scanf("%d %d",&n,&p);
    //nacitavam postupnost a rovno ju rozdelujem
    for(int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);
        if(x<p) V[0][P[0]++]=x;
        else if(x==p) V[1][P[1]++]=x;
        else V[2][P[2]++]=x;
    }
    //vypisem vysledok
    for(int i=0; i<3; i++) {
        for(int j=0; j<P[i]-1; j++) printf("%d ",V[i][j]);
        if(P[i]>0) printf("%d",V[i][P[i]-1]);
        printf("\n");
    }
}
