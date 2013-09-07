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

int daj() {
    return rand()%2000000001-1000000000;
}

int main() {
    srand(time(NULL)*getpid());
    int n=rand()%5000000+1;
    vector<int> A;
    set<int> S;
    while(S.size()!=n) S.insert(daj());
    for(set<int>::iterator it=S.begin(); it!=S.end(); it++) A.push_back(*it);
    printf("%d\n",n);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
    int q=rand()%1000+1;
    printf("%d\n",q);
    For(i,q) {
        if(rand()%2==0) printf("%d\n",rand()%1000000001);
        else printf("%d\n",abs(A[rand()%n]));
    }
return 0;
}
