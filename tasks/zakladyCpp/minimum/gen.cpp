//Fruit of Light
//FoL CC
//Apple Strawberry

#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<unistd.h>

using namespace std;

#define For(i, n) for(int i = 0; i<(n); ++i)
#define ForEach(it, i) for(typeof i.begin() it = i.begin(); it!=i.end(); ++it)

typedef long long ll;
typedef pair<int, int> pii;

int main(){
    int n;
    srand(time(NULL)+getpid());
    //scanf("%d",&n);
    n = 5;
    For(i,n)
        printf("%d%c",rand()%1000+1, (i==n-1)?'\n':' ');
}
