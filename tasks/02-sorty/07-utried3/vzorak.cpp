//Mergesort
#include<cstdio> //printf a scanf
#include<algorithm>
using namespace std;

int n,p;
int A[100047];
int B[5000047];

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        int x;
        scanf(" %d",&x);
        A[x]++;
    }
    for(int i=0; i<=100000; i++)
        for(int j=0; j<A[i]; j++) B[p++]=i;
    for(int i=0; i<p-1; i++) printf("%d ",B[i]);
    printf("%d\n",B[p-1]);
}
