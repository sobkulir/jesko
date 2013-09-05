#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int N;
    scanf(" %i", &N);
    long long res = 0;
    long long last = 0;
    for(int i = 0; i < N; ++i){
        int x;
        scanf(" %i", &x);
        res += max(0LL, last - x);
        last = x;
    }
    printf("%lli\n", res);
}
