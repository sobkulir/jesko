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
}

/* Kratsie riesenie by mohlo vyzerat napríklad nasledovne:

int main(){
    int x, suma = 0, max = 0;
    for(int i = 0; i<5; ++i) {
        cin >> x;
        suma+=x;
	if(x > max) max = x;
    }
    cout << suma-max << endl;
}
*/
