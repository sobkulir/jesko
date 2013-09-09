#include <cstdio>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    srand(time(NULL)*getpid());
    int n=rand()%19+2;
    vector<int> A;
    for(int i=0; i<n; i++) A.push_back(rand()%20);
    printf("%d\n",n);
    for(int i=0; i<n; i++) printf("%d%c",A[i],((i!=n-1)?' ':'\n'));
}
