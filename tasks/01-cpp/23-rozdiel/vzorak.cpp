#include<iostream>
#include <cstdlib>  

using namespace std;

int main(){
	int n,x;
	int a[100];
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool nachadza=false;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])==x){
				nachadza=true;
			}
		}
	}
	if(nachadza)
		cout << "Ano" << endl;
	else
		cout << "Nie" << endl;
	
}
