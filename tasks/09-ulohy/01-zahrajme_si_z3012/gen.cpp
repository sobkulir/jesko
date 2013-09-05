//Fruit of Light
//FoL CC
//Apple Strawberry

#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

#define For(i, n) for(int i = 0; i<(n); ++i)
#define ForEach(it, i) for(typeof i.begin() it = i.begin(); it!=i.end(); ++it)

typedef long long ll;
typedef pair<int, int> pii;

int main(){
    int N,K,L;
    scanf("%d%d%d", &N, &K, &L);
    srand(N+K+L);
    printf("%d %d %d\n", N, K, L);
    For(i,N) printf("%d\n", 1+rand()%K);
}
