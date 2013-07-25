#include<cstdio> 
#include <algorithm>
using namespace std;

int A[100047];
int B[1047][1047];
int P[1047];

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    for(int i=0; i<q; i++) {
        int k;
        scanf("%d",&k);
        for(int j=0; j<k; j++) scanf("%d",&B[i][j]);
        B[i][k]=1000000047;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<q; j++) if(B[j][P[j]]==A[i]) P[j]++;
    }
    for(int i=0; i<q; i++)
        if(B[i][P[i]]==1000000047) printf("ano\n");
        else printf("nie\n");
}
