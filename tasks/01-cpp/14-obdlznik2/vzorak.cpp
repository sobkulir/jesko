#include<iostream>

using namespace std;

int main(){
	int s, r;
	cin >> r >> s;
	for(int j = 0; j < r; j++){
		for(int i = 0; i < s; i++){
			cout << "*";
		}
		cout << endl;
	}
}
