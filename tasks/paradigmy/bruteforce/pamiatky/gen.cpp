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
    printf("%d\n",n);
    For(i,n) {
        int x;
        if(rand()%3!=0) x=rand()%1000;
        else x=-rand()%1000;
        printf("%d%c",x,((i!=n-1)?' ':'\n'));
    }
return 0;
}
