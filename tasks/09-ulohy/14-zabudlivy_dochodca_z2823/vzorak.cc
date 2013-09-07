#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    scanf(" %i", &N);

    vector<vector<int> > a(2, vector<int> (N/2 + 1, 2000000000));
    for(int i = 0; i < N; ++i){
        scanf(" %i", &a[i%2][i/2]);
        // zapise to prvky na parnych meistach do 0-teho pola, a prvky na 
        // neparnych miestach do 1-eho pola
    }

    sort(a[0].begin(), a[0].end());
    sort(a[1].begin(), a[1].end());

    vector<int> b(N);
    for(int i = 0; i < N; ++i){
        b[i] = a[i%2][i/2];
    }

    bool ok = true;
    for(int i = 0; i < N-1; ++i){
        if(b[i] > b[i+1]){ ok = false; break;}
    }

    if(ok) printf("Ano.\n"); 
    else printf("Nie.\n");

}
