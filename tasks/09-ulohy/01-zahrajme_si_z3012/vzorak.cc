#include <cstdio>

using namespace std;

int main(){
    long long N, K, L;
    scanf(" %lli %lli %lli", &N, &K, &L);
    long long pozicia = 1; // pozicia najlavejsieho prstu
    long long vysledok = 0;
    for(int i = 0; i < N; ++i){
        long long x;
        scanf(" %lli", &x);
        if(x < pozicia){
            // ak je nota nalavo od ruky
            vysledok += pozicia - x;
            pozicia = x;
        }
        else if(x > pozicia + L - 1){
            // ak je nota napravo od ruky
            vysledok += x - (pozicia + L - 1);
            pozicia = x - L + 1;
        }
        // ak je nota v rozsahu ruky, tak nic nerobime
    }
    printf("%lli\n", vysledok);
}
