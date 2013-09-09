#include<iostream>

using namespace std;

int main(){
	int n,x;
	int a[107];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> x;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			sum+=a[i];
		}
	}
	cout << sum << endl;
}
