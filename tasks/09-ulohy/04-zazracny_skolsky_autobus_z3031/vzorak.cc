#include <iostream>

using namespace std;

int main(){
        int x,y;
        cin >> y >> x;
        bool ok = false;
        for(int i = 0; i < y; i++){
                string riadok;
                cin >> riadok;
                for(int j = 0; j < x; j++){
                        if(riadok[j] == 'H') ok = true;
                }
        }
        if(ok) cout << "doprava\n";
        else cout << "dolava\n";
        return 0;
}
