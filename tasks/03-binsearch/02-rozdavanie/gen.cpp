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
    vector<int> A;
    For(i,n) A.push_back(rand()%1000000+1);
    int celkovo=0;
    For(i,n) celkovo+=A[i];
    int p=0;
    if(rand()%3==0) p=rand()%1000000000+1;
    else p=rand()%celkovo+1;
    printf("%d %d\n",n,p);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
