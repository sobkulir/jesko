#include<iostream>

using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	if(x == 0){
		cout << "nulove" << endl;
	}
	if(x > 0){
		cout << "kladne" << endl;
	}
	if(x < 0){
		cout << "zaporne" << endl;
	}
	return 0;
}
