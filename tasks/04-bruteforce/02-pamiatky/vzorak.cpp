#include<cstdio>
#include<algorithm>
using namespace std;

int R[10],P[10];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&R[i]);
    for(int i=0; i<n; i++) P[i]=i;
    int vys=0;
    do{
        int stastie=0;
        bool ok=true;
        for(int i=0; i<n; i++) {
            stastie+=R[P[i]];
            if(stastie<0) ok=false;
        }
        if(ok) vys++;
    }while(next_permutation(P,P+n));
    printf("%d\n",vys);
}
