#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<bool> chair(N, false);

    int pos = 0;
    for(int skok = 0; skok <= N; ++skok){
        chair[pos] = true;
        pos = (pos + skok)%N;
    }

    int res = 0;
    for(int i = 0; i < N; ++i){
        if(chair[i]) ++res;
    }
    cout << res << endl;
}
