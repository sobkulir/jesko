#include<iostream>

using namespace std;

int main(){
    int n,x,c;
    cin >> n;
    cin >> x;
    for (int i = 0; i<n; ++i) {
        cin >> c;
        cout << c+x;
        if(i!=n-1) cout << " "; 
    }
    cout << endl;
}
