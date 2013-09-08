#include<iostream>

using namespace std;

int main(){
	int x,suma,max;
	suma = 0;
	max = 0;

	cin >> x;
	suma+=x;
	if(x > max) max = x;
	
	cin >> x;
	suma+=x;
	if(x > max) max = x;
	
	cin >> x;
	suma+=x;
	if(x > max) max = x;
	
	cin >> x;
	suma+=x;
	if(x > max) max = x;
	
	cin >> x;
	suma+=x;
	if(x > max) max = x;
	
	cout << suma-max << endl;
	return 0;
}
