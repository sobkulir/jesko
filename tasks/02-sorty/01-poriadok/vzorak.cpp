#include<cstdio> //printf a scanf

int n; //pocet hraciek
int A[1047]; //pole kam si ulozim velkosti hraciek. Je dobre ho mat o kusok vacsie ako maximalny pocet hraciek

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    //overim, ci su od najmensieho po najvacsi
    bool over1=true;
    for(int i=0; i<n-1; i++) if(A[i]>A[i+1]) over1=false;
    //overim, ci su od najvacsieho po najmensi
    bool over2=true;
    for(int i=0; i<n; i++) if(A[i]<A[i+1]) over2=false;
    if(over1 || over2) printf("poriadok\n");
    else printf("bordel\n");
}
