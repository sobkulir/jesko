#include <iostream>

using namespace std;

int main(){
    int R, S;
    cin >> R >> S;

    for(int i = 0; i < R; ++i){
        for(int j = 0; j < S; ++j)
            cout << "+-";
        cout << "+\n";
        
        for(int j = 0; j < S; ++j)
            cout << "| ";
        cout << "|\n";
    }

    for(int j = 0; j < S; ++j)
        cout << "+-";
    cout << "+\n";
}
