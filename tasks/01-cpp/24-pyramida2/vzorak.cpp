#include<iostream>

using namespace std;

int main(){
	int n;
	int a[100];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=n-1;i>0;i--){	
		for(int j=0;j<i;j++){
			a[j]=a[j]+a[j+1];
			cout<< a[j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
