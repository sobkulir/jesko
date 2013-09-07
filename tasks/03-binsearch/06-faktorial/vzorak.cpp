#include<cstdio>
#include<algorithm>
using namespace std;

int n,k;
int A[50047];

int main(){
    int n;
    scanf("%d",&n);
    int z=0,k=100000000;
    while(k-z>1) {
        int s=(k+z)/2;
        int poc=0,moc=5;
        while(moc<=s) {
            poc+=s/moc;
            moc*=5;
        }
        if(poc>=n) k=s;
        else z=s;
    }
    printf("%d\n",k);
}
