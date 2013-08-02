/*MAGIC!*/

// input/output
#include <cstdio>
#include <iostream>
// structures
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <complex>
// other stuff
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <sys/types.h> //  magic for getpid()
#include <unistd.h>    //  magic for getpid()

using namespace std;

#define dbg if(0)
#ifdef EBUG 
	#undef dbg
    #define dbg if(1) 
#endif
#define db(x) dbg cerr << #x << "\t: " << (x) << endl;
#define dbv(x) dbg{                        \
        cerr << #x << "\t: ";              \
        FOREACH(it, x) cerr << *it << " "; \
        cerr << endl;                      \
    }
#define name(x) #x

// vlastny assert
#define EXIT 0
#define WA 3
#define TLE 1
#define EXC 2
#define assert(x, ...) if(!(x)){                                  \
        cerr << "F: " << __FUNCTION__ << "(), L: " << __LINE__ << \
            ", (" << #x << ") isn\'t true\n";                     \
        error_exit(__VA_ARGS__);                                  \
    }
void error_exit(int error=EXIT){
    switch(error){
        case EXIT:   exit(0);                           break;
        case WA:     cout << "BRUM BRUM BRUM\n";        break;
        case TLE:    while(47){};                       break;
        case EXC:    int *q47; q47[1000047] = 47;       break;
    }
}

#define MINIM(x, y) x = min(x, static_cast<__typeof__(x)>(y))
#define MAXIM(x, y) x = max(x, static_cast<__typeof__(x)>(y))
#define FOR(i, n) for(long long i = 0; i < static_cast<long long>(n); ++i)
#define FOR1(i, n) for(long long i = 1; i <= static_cast<long long>(n); ++i)
#define FOREACH(it, str) \
    for(auto it = (str).begin(); it != (str).end(); ++it)
#define mp make_pair
#define mt make_tuple
#define pf printf
#define sf scanf
#define PASS
#define sqr(x) ((x)*(x))
typedef long long ll;
const long long INF = 1000*1000*1000;
const double EPS = 1e-9;
typedef pair<long long, long long> pll;
typedef pair<int,int> pii;

// operators for complex to store in set and other stuff
template<class Templ>
bool operator<(const complex<Templ> &a, const complex<Templ> &b){
    if(real(a) != real(b)) return real(a) < real(b);
    else return imag(a) < imag(b);
}
template<class Templ>
bool operator>(const complex<Templ> &a, const complex<Templ> &b){
    if(real(a) != real(b)) return real(a) > real(b);
    else return imag(a) > imag(b);
}
template<class Templ>
struct comp_complex{
    bool operator() (const complex<Templ> &a, const complex<Templ> &b) const{
        return a < b;
    }
};

const int NLIMIT = 10000; // keep it small for iostream 
const int KLIMIT = 12; // intentionally small
const int QRATE = 10; // percents
const int NAMELEN = 12;
const string NEXT = "von";
const string MALO = "malo deti";

inline int random_number(int upperbound){
    // return pseoudorandom number from 1 to `upperbound
    // requires initalized rand()
    return rand()%upperbound + 1;
}

string random_name(){
    int len = random_number(NAMELEN);
    string ans = "";
    FOR(i, len) ans += 'a' + rand()%26;
    if(ans == NEXT) ans = random_name(); // cannot be equal to NEXT

    return ans;
}

int main(){
    srand(time(NULL) * getpid());    
    int N = random_number(NLIMIT);
    int K = random_number(KLIMIT);

    vector<string> output(N);
    FOR(i, N){
        if(rand()%100 < QRATE) output[i] = NEXT;
        else output[i] = random_name();
    }

    cout << N << " " << K << endl;
    FOR(i, N) cout << output[i] << endl; 
}
