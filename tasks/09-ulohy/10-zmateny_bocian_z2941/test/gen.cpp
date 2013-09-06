#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int n;
vector<int> A, B;

void nahodny(void){
    for (int i = 0; i < n; i++){
        int h;
        do{
            h = rand()%n;
        }while(h == i);
        cout << h+1 << (i==n-1?'\n':' ');
    }
}

void zakerny(void){
    A.resize(n); 
    for(int i = 0; i < n; i++)
        A[i] = i;
    for (int i = n; i > 0; i--){
        int h; 
        do{ 
            h = rand()%i;
        }while(A[h]==n-i);
        cout << A[h]+1 << (i==1?'\n':' ');
        A[h] = A[i-1]; 
    }   
}

void cyklus(void){
    A.resize(n);
    B.resize(n, 1);
    for(int i = 0; i < n-1; i++)
        A[i] = i+1;
    int ac = 0;
    for (int i = n-1; i > 0; i--){
        int h;
        do{
            h = rand()%i;
        }while(A[h]==ac);
        B[ac] = A[h]+1;
        ac = A[h];
        A[h] = A[i-1];
    }
    for(int i = 0; i < n; i++)
        cout << B[i] << (i==n-1?'\n':' ');
}

int main(void){
    srand(time(NULL));
    cin >> n;
    cout << n << endl;
    int t = rand()%3;
    if(t == 0)
        nahodny();
    else if(t == 1)
        zakerny();
    else
        cyklus();
}
