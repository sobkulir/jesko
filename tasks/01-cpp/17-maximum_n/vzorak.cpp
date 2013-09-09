#include<iostream>

using namespace std;

int main(){
	int n,a,maximum = -1;
	cin >> n;
	for (int i = 0; i<n; ++i) {
		cin >> a;
		if (a > maximum) {
			maximum = a;
		}
	}
	cout << maximum << endl;
}
