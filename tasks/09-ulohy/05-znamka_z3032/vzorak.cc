#include<iostream>
#define For(i, n) for(int i = 0; i<(n); ++i)
using namespace std;
typedef long long ll;
ll a[10], sum, pocet;

int main(){
    // pre jednoduchosť, známky budú 0..4, tým pádom priemer chceme 1
    For(i,5) {
        cin >> a[i];
        pocet+=a[i];
        sum+=a[i]*i;
    }
    // ak je priemer primalý, spočítame, koľko jednotiek treba meniť
    if (sum<=pocet) {
        cout << (pocet-sum+3)/4 << endl;
        return 0;
    }
    // inak postupne meníme 4ky, 3ku, 2ky. (pozor, známky sú 0..4)
    ll zmena = 0;
    int znamka = 4;
    while(sum>pocet) {
        // koľko známok danej hodnoty musím zmeniť
        ll kolko = min((sum-pocet+znamka-1)/znamka, a[znamka]);
        zmena += kolko;
        sum -= znamka*kolko;
        znamka--;
    }   
    cout << zmena << endl;
}
