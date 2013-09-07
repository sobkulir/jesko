#include<cstdio>
#include<algorithm>
using namespace std;

int n,k;
int A[100047];

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    scanf("%d",&k);
    int zac=0,kon=0;
    for(int i=0; i<n; i++) kon=max(kon,A[i]);
    if(k==1) {printf("%d\n",kon); return 0;}
    k--;
    while(kon-zac>1) {
        int stred=(kon+zac)/2;
        long long poc=0;
        for(int i=0; i<n; i++) if(stred<A[i]) poc+=(A[i]-stred+k-1)/k;
        if(poc>stred) zac=stred;
        else kon=stred;
    }
    printf("%d\n",kon);
}
