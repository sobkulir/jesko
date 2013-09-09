#include<iostream>

using namespace std;

int main(){
	int n,x;
	cin >> n;
	int a[107];
	for (int i = 0; i<n; ++i) {
		cin >> a[i];
	}
	cin >> x;
	for (int i = 0; i<n; ++i) {
		cout << a[i]+x;
                if(i!=n-1) cout << " ";
	}
	cout << endl;
}
