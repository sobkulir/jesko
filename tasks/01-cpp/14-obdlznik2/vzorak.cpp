#include<iostream>

using namespace std;

int main(){
	int s, r;
	cin >> r >> s;
	for(int j = 1; j <= r; j++){
		for(int i = 1; i <= s; i++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
