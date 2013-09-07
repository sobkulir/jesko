#include<cstdio>
#include<algorithm>
using namespace std;

int n,q;
int A[5000047];

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    scanf("%d",&q);
    int r=0;
    while(r!=n && A[r]<0) r++;
    for(int i=0; i<q; i++) {
        int x;
        scanf("%d",&x);
        bool je=false;
        int z=r,k=n;
        while(k-z>1) {
            int s=(k+z)/2;
            if(A[s]<=x) z=s;
            else k=s;
        }
        if(A[z]==x) je=true;
        z=0; k=r; x*=-1;
        while(k-z>1) {
            int s=(k+z)/2;
            if(A[s]<=x) z=s;
            else k=s;
        }
        if(A[z]==x) je=true;
        if(je) printf("A\n");
        else printf("N\n");
    }
}
