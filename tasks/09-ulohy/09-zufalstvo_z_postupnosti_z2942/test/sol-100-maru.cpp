#include <iostream>
#include <climits>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main () {
	int n;
	cin >>n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	bool ar = true;
	int k = a[0]-a[1];
	for (int i = 1; i < n-1; i++) {
		if (a[i] - a[i+1] != k) {
			ar = false;
			break;
		}
	}
	if (ar) printf ("ano\n");
	else printf ("nie\n");
	
	bool geom = true;
        if (a[0] == 0 && a[1] != 0) geom = false;
	if (n > 2) { 
		for (int i = 0; i < n-2; i++) {
                        if (a[i+1] == 0 && a[i+2] != 0) geom = false;
			if (a[i]*a[i+2] != a[i+1]*a[i+1]) {
				geom = false;
				break;
			}
		}
	}
	if (geom) printf ("ano\n");
	else printf ("nie\n");
	
	return 0;
}
