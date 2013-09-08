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
    int n=rand()%8+1,k=rand()%8+1;
    vector<vector<int> > A;
    A.resize(n);
    For(i,n) For(j,k) A[i].push_back(rand()%10);
    printf("%d %d\n",n,k);
    For(i,n) {For(j,k) printf("%d",A[i][j]); printf("\n");}
return 0;
}
