#include <cstdio>
using namespace std;

int A[1000];

int main() {
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    scanf("%d",&x);
    //hladam prvok x v utriedenom poli A
    int z=0,k=n;
    while(k-z>1) {
        int s=(z+k)/2;
        if(A[s]<=x) z=s;
        else k=s;
    }
    if(A[z]==x) printf("Obsahuje prvok %d\n",x);
    else printf("Neobsahuje prvok %d\n",x);
}
