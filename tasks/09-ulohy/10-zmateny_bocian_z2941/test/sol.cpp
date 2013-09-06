#include <iostream>
#include <vector>
using namespace std;

vector<int> G, mk;

int main(void){
    int n;
    cin >> n;
    G.resize(n);
    for(int i = 0; i < n; i++){
        cin >> G[i];
        G[i]--;
    }
    mk.resize(n, 0);
    int ac = 0;
    for(int i = 0; i < n; i++){
        mk[G[ac]] = 1;
        ac = G[ac];
    }
    for(int i = 0; i < n; i++)
        if(!mk[i]){
            cout << "Nie" << endl;
            return 0;
        }
    cout << "Ano" << endl;
}
