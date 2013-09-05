#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    scanf(" %i", &N);

    vector<bool> druhy(N+1, false);

    for(int i = 0; i < N; ++i){
        int druh, tuk;
        scanf(" %i %i", &druh, &tuk);
        druhy[druh] = true;
    }

    int res = 0;
    for(int i = 1; i <= N; ++i){
        if(druhy[i]) ++res;
    }
    printf("%i\n", res);
}
