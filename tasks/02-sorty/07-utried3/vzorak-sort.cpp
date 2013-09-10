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
        scanf(" %d",&B[i]);
    }
    sort(B,B+n);
    for(int i=0; i<n-1; i++) printf("%d ",B[i]);
    printf("%d\n",B[n-1]);
}
