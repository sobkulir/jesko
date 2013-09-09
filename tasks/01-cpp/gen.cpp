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
    srand(time(NULL));
    int n, m;
    scanf("%d %d",&n, &m);
    printf("%d %d\n", n, m);
    For(i, n) {
        For(i, m) 
            printf("%d%c",rand()%100+1, (i==m-1)?'\n':' ');
    }
}
