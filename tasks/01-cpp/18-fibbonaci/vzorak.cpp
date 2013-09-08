#include<iostream>

using namespace std;

int main(){
	int n;
	int a = 1, b = 1;
	cin >> n;
	for (int i = 0; i<n; ++i) {
		cout << a << " ";
		int pom = b;
		b = a+b;
		a = pom;
	}
	cout << endl;
}
