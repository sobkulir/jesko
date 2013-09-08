#include<iostream>

using namespace std;

void a1(){
	cout << "A";
	cout << "B";
	cout << "D";
}

void a2(){
	cout << "A";
	cout << "C";
	cout << "D";
}

void a3(){
	cout << "A";
	for(int i = 0; i < 5; i++) cout << "C";
	cout << "D";
}

void a4(){
	cout << "A";
	a2();
	cout << "D";
}

void a5(){
	cout << "A";
	a3();
	cout << "C";
	for(int i = 0; i < 5; i++)  a1();
	cout << "D";
}

void a6(){
	cout << "A";
	a5();
	cout << "C";
	for(int i = 0; i < 5; i++)  cout << "B";
	for(int i = 0; i < 5; i++)  a4();
	cout << "D";
}


int main(){
	int n;
	cin >> n;
	if(n==1) a1();
	if(n==2) a2();
	if(n==3) a3();
	if(n==4) a4();
	if(n==5) a5();
	if(n==6) a6();
	cout << "\n";
	return 0;
}
