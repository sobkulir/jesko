#include<cstdio>
#include<algorithm>
using namespace std;

int n;
int A[100047],B[100047],C[100047];

void mergesort(int zac, int kon) {
    if(zac+1==kon) return;
    int stred=(zac+kon)/2;
    mergesort(zac,stred);
    mergesort(stred,kon);
    int p1=zac,p2=stred; 
    int kam=0;
    while(p1!=stred && p2!=kon) {
        if(A[p1]<A[p2]) {B[kam]=A[p1]; p1++;}
        else {B[kam]=A[p2]; p2++;}
        kam++;
    }
    while(p1!=stred) B[kam++]=A[p1++];
    while(p2!=kon) B[kam++]=A[p2++];
    for(int i=0; i<kam; i++) A[zac+i]=B[i];
}

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    for(int i=0; i<n; i++) C[i]=A[i];
    mergesort(0,n);
    int p=0;
    for(int i=0; i<n; i++) if(A[i]!=C[i]) p++;
    if(p==0 || p==2) printf("Maja\n");
    else printf("neMaja\n");
}
