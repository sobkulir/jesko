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
    int n=min(100,rand()%100+3);
    int m=rand()%(n*(n-1)/2);
    set<pii> S;
    vector<int> A;
    For(i,n) A.push_back(rand()%1000000+1);
    int tik=0;
    while(tik<1000000 && S.size()!=m) {
        tik++;
        int x=rand()%n+1,y=rand()%n+1;
        if(x==y) continue;
        S.insert(mp(min(x,y),max(x,y)));
    }
    if(rand()%3!=0) {
        int a=rand()%n+1,b=rand()%n+1,c=rand()%n+1;
        if(a>b) swap(a,b); if(b>c) swap(b,c); if(a>b) swap(a,b);
        if(!(a==b || b==c)) S.insert(mp(a,b)); S.insert(mp(b,c)); S.insert(mp(a,c));
    }
    printf("%d %d\n",n,S.size());
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
    for(set<pii>::iterator it=S.begin(); it!=S.end(); it++) printf("%d %d\n",(*it).first,(*it).second);
return 0;
}
