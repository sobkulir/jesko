#include<cstdio>
#include<algorithm>
using namespace std;

int n,p;
int A[100047];

int main(){
    scanf("%d %d",&n,&p);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    int sum=0;
    for(int i=0; i<n; i++) sum+=A[i];
    if(sum<p) {printf("Nic nedostanete\n"); return 0;}
    int z=0,k=sum;
    while(k-z>1) {
        int s=(k+z)/2;
        int rozdam=0;
        for(int i=0; i<n; i++) rozdam+=min(s,A[i]);
        if(rozdam>=p) k=s;
        else z=s;
    }
    printf("%d\n",k);
}
