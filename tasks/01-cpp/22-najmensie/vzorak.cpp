#include<iostream>

using namespace std;

int main(){
	int n;
	int a[100];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	int poc=0;
	for(int i=0;i<n;i++){
		if(a[i]==min){
			poc++;
		}
	}
	cout << poc;
	return 0;
}
