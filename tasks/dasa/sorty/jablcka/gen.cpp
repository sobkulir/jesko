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
    int n,typ;
    scanf("%d %d",&n,&typ);
    vector<int> A;
    For(i,n) A.push_back(rand()%1000000000+1); 
    sort(A.begin(),A.end());
    int p;
    if(typ==0) p=rand()%1000000000+1;
    if(typ==1) p=A[rand()%n];
    if(typ==2) {
        if(rand()%2==0) p=A[0];
        else p=A[n-1];
    }
    random_shuffle(A.begin(),A.end());
    printf("%d %d\n",n,p);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
