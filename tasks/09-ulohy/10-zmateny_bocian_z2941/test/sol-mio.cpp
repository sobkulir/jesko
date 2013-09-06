#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <cmath>
#include <list>
#include <sstream>
#include <algorithm>
using namespace std;

//------------------------ Zemcove makra
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<pair<int,int> > VPII;
typedef vector<LL> VLL;
typedef vector<pair<LL,LL> > VPLL;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;

#define PI 3.14159265358979323
#define EE 2.71828182845
#define EPS 10e-11
#define INF 10000000

inline LL MAX(LL a, LL b){ return a < b ? b : a;}
inline LL MIN(LL a, LL b){ return a < b ? a : b;}

#define FOR(i,n)      for(int i=0;i<(n);i++)
#define FORD(i,n)     for(int i=(n)-1;i>=0;i--)

#define PB push_back
#define MP make_pair

//-------------------------- Koniec zemcovych makier

//vzorak - O(n) - Mio

VI g, gv; //graf, vzdialenosti

int main(){
  long n;
  scanf("%ld",&n);
  g.resize(n);  
  gv.resize(n,0);
  FOR(i,n)
  {
    long b;
    scanf("%ld",&b);
    b--;
    g[i] = b; 
  }

  long v = 0;
  while(gv[v]==0) //kym nenajdem cyklus
  {
    gv[v]=1;
    v = g[v];
  }

  if(v!=0)
  {
    cout << "Nie" << endl;
    return 0;
  }

  FOR(i,n)
  {
    if(gv[i]!=1)
    {
      cout << "Nie" << endl;
      return 0;
    }
  }
  cout << "Ano" << endl;


  
  return 0;
}

