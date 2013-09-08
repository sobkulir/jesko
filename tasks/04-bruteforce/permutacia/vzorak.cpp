#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int n,k;
int A[10][10],B[10];

int cislo(int i, vector<int> P) {
    for(int j=0; j<k; j++) B[j]=A[i][P[j]];
    int res=0;
    for(int j=0; j<k; j++) {res*=10; res+=B[j];}
    return res;
}

int main() {
    scanf("%d %d ",&n,&k);
    for(int i=0; i<n; i++)
        for(int j=0; j<k; j++) {
            char c;
            scanf("%c ",&c);
            A[i][j]=c-'0';
        }
    vector<int> P;
    for(int i=0; i<k; i++) P.push_back(i);
    int res=1000000000;
    do {
        int mini=100000000,maxi=0,x;
        for(int i=0; i<n; i++) {
            x=cislo(i,P);
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        res=min(res,maxi-mini);
    }while(next_permutation(P.begin(),P.end()));
    printf("%d\n",res);
}
