#include<cstdio> //printf a scanf

int n; //pocet hub
int A[100047]; //pole kam si ulozim cervivosti hub. Je dobre ho mat o kusok vacsie ako maximalny pocet hraciek

int main(){
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",&A[i]);
    //najdem najmensi prvok a jeho poziciu
    int mini=A[1],poz=1;
    for(int i=2; i<=n; i++) {
        if(mini>A[i]) {mini=A[i]; poz=i;}
    }
    //vymenim hubu na pozicii 1 a poz
    int pom=A[1]; A[1]=A[poz]; A[poz]=pom;
    //musim si dat pozor, aby som nedal medzeru za poslednym cislom
    for(int i=1; i<n; i++) printf("%d ",A[i]);
    printf("%d\n",A[n]);
}
