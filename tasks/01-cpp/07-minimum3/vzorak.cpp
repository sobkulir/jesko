#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(x < y){
		if(x < z){
			cout << x << endl;
		} else {
			cout << z << endl;
		}
	} else {
		if(y < z){
			cout << y << endl;
		} else {
			cout << z << endl;
		}
	}
}
