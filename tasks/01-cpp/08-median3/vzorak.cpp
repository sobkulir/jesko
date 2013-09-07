#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(x < y){
		if(y < z){
			cout << y << endl;
		} else {
			if(x < z){
				cout << z << endl;
			} else {
				cout << x << endl;
			}
		}
	} else {
		if(y > z){
			cout << y << endl;
		} else {
			if(x > z){
				cout << z << endl;
			} else {
				cout << x << endl;
			}
		}
	}
	return 0;
}
