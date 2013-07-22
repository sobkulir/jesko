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
    int n=rand()%1000+1;
    int typ=rand()%3;
    vector<int> A;
    For(i,n) A.push_back(rand()%1000+1);
    sort(A.begin(),A.end());
    if(typ==1) reverse(A.begin(),A.end());
    if(typ==2) random_shuffle(A.begin(),A.end());
    printf("%d\n",n);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
