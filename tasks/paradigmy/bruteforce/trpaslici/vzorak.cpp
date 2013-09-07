#include<cstdio>
#include<algorithm>
using namespace std;

int A[7],O[7];

int main(){
    for(int i=0; i<7; i++) {scanf("%d",&A[i]); O[i]=-1;}
    int n,h;
    scanf("%d %d",&n,&h);
    for(int i=0; i<(1<<7); i++) {
        int p=0,sum=0;
        for(int j=0; j<7; j++)
            if(i&(1<<j)) {p++; sum+=A[j];}
        if(p!=n || sum!=h) continue;
        for(int j=0; j<7; j++)
            if(i&(1<<j))
                if(O[j]!=-1 && O[j]!=1) O[j]=2;
                else O[j]=1;
            else {
                if(O[j]!=-1 && O[j]!=0) O[j]=2;
                else O[j]=0;
            }
    }
    for(int i=0; i<7; i++) {
        printf("%d ",i+1);
        if(O[i]==0) printf("chyba\n");
        if(O[i]==1) printf("doma\n");
        if(O[i]==2) printf("nevedno\n");
    }
}
