#include<cstdio>
#include<algorithm>
using namespace std;

int A[30];

int main(){
    int n,w;
    scanf("%d %d",&n,&w);
    for(int i=0; i<n; i++) scanf(" %d",&A[i]);
    int res=0;
    for(int i=0; i<1<<n; i++) {
        int pom=0;
        for(int j=0; j<n; j++)
            if(i&(1<<j)) pom+=A[j];
        if(pom<=w && res<pom) res=pom;
    }
    printf("%d\n",res);
}
