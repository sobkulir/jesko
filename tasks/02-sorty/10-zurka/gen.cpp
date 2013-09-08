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
    int n=rand()%100000+1;
    vector<int> A;
    For(i,n) A.push_back(rand()%1000000000+1);
    if(rand()%2==0) {
        sort(A.begin(),A.end());
        if(rand()%4!=0) {
            int x=rand()%n,y=rand()%n;
            swap(A[x],A[y]);
        }
    }
    printf("%d\n",n);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
