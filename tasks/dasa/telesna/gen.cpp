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
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> A,B;
    For(i,n) A.push_back(rand()%1000000000+1);
    For(i,m) B.push_back(rand()%1000000000+1);
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    printf("%d\n",n);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
    printf("%d\n",m);
    For(i,m) printf("%d%c",B[i],((i!=m-1)?' ':'\n'));
return 0;
}
