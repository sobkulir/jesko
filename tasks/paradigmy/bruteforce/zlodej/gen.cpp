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
    int n;
    scanf("%d",&n);
    vector<int> A;
    For(i,n) A.push_back(rand()%10000+1);
    int r=rand()%(1<<n);
    int w=0;
    For(i,n) if(r&(1<<i)) w+=A[i];
    w+=rand()%10;
    printf("%d %d\n",n,w);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
