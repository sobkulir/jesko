#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <stack>
using namespace std;

#define For(i,n) for(int i=0; i<(n); i++)
#define mp(a,b) make_pair((a),(b))
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    srand(time(NULL)*getpid());
    int n=rand()%40000+1,k=rand()%min(50000,n*n)+1;
    if(rand()%3==0) k=n+rand()%100;
    vector<int> A;
    A.resize(k,1);
    int mam=n*n-k;
    while(mam>0) {
        int x=rand()%k;
        int kolko=rand()%mam+1;
        A[x]+=kolko;
        mam-=kolko;
    }
    printf("%d %d\n",n,k);
    For(i,k) printf("%d\n",A[i]);
return 0;
}
