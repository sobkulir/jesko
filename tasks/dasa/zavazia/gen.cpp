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
    int typ=rand()%3;
    vector<int> A;
    if(typ==0) {
        For(i,n) A.push_back(rand()%1000+1);
    }
    if(typ==1) {
        vector<int> B;
        For(i,10) B.push_back(rand()%1000+1);
        For(i,n) {
            int x=rand()%1000+1;
            if(rand()%2==0) x=B[rand()%10];
            A.push_back(x);
        }
    }
    if(typ==2) {
        int maxi=rand()%1000+1;
        For(i,n) {
            if(rand()%4==0) A.push_back(maxi);
            else A.push_back(rand()%maxi+1);
        }
    }
    printf("%d\n",n);
    For(i,n) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
return 0;
}
