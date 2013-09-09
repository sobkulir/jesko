#include<iostream>

using namespace std;

int main(){
	int n;
	int a = 0, b = 1;
	cin >> n;
	for (int i = 0; i<n; ++i) {
		cout << a;
                if(i!=n-1) cout << " ";
		int pom = b;
		b = a+b;
		a = pom;
	}
	cout << endl;
}
