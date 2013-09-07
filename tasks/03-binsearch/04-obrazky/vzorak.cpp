#include<cstdio>
#include<algorithm>
using namespace std;

int n,k;
int A[50047];

int main(){
    scanf("%d %d",&n,&k);
    for(int i=0; i<k; i++) scanf("%d",&A[i]);
    int zac=1,kon=n+1;
    while(kon-zac>1) {
        int stred=(zac+kon)/2;
        int viem=0;
        for(int i=0; i<k; i++) viem+=A[i]/stred;
        if(viem>=n) zac=stred;
        else kon=stred;
    }
    printf("%d\n",zac);
}
