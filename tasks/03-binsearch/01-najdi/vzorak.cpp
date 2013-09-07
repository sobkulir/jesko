#include<cstdio>
#include<algorithm>
using namespace std;

int n,q;
int A[100047];

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    scanf("%d",&q);
    for(int i=0; i<q; i++) {
        int x;
        scanf("%d",&x);
        int z=0,k=n;
        while(k-z>1) {
            int s=(k+z)/2;
            if(A[s]<=x) z=s;
            else k=s;
        }
        if(A[z]==x) printf("%d\n",z);
        else printf("-1\n");
    }
}
