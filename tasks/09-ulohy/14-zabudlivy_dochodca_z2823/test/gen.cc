#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

#include <unistd.h>

using namespace std;

int main(){
    srand(time(NULL) * getpid());
    
    int maxn;
    scanf(" %i", &maxn);

    int N = rand() % (maxn  - 3) + 3;
    printf("%i\n", N);

    vector<int> a(N);
    for(int i = 0; i < N; ++i) a[i] = rand() % (1000000 - 47) + 47;
    sort(a.begin(), a.end());

    if (rand()%2){
        // dobru vec
    }
    else{
        cerr << "zle\n";
        // zlu vec
        a[1] = a[0] - 15;
    }

    for(int i = 0; i < 10000; ++i){
        int j = rand()%(N-2);
        swap(a[j], a[j+2]);
    }

    printf("%i", a[0]); for(int i = 1; i < N; ++i) printf(" %i", a[i]);
    printf("\n");
}
