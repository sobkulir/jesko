//Minsort
#include<cstdio> //printf a scanf
#include<algorithm> //funkcia swap
using namespace std;

int n; //pocet prvkov
int A[5047]; //pole kam si ulozim postupnost. Je dobre ho mat o kusok vacsie ako maximalny pocet hraciek

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    //n krat hladam minimum a vymienam ho
    for(int i=0; i<n; i++) {
        //najdem kde sa nachadza najmensi prvok
        int min=i;
        for(int j=i; j<n; j++) if(A[j]<A[min]) min=j;
        //vymenim i-ty prvok a prvok na pozicii min
        swap(A[i],A[min]);
    }
    //vypisem vysledok
    for(int i=0; i<n-1; i++) printf("%d ",A[i]);
    printf("%d\n",A[n-1]);
}
