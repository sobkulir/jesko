#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define For(i,n) for(int i=0; i<(n); i++)
typedef long long ll;

int main()
{
    int m;
    scanf("%d ",&m);
    int mini=1000000000;
    For(i,m)
    {
        int x;
        scanf("%d ",&x);
        mini=min(mini,x);
    }
    int n;
    scanf("%d ",&n);
    int suma=0;
    vector<int> A; A.resize(n);
    For(i,n) {scanf("%d ",&A[i]); suma+=A[i];}
    int vys=0;
    sort(A.begin(),A.end());
    int kon=A.size()-1;
    int potrebujem=mini,zlava=0;
    while(kon!=-1)
    {
        if(zlava>0)
        {
            kon--;
            zlava--;
            if(zlava==0) potrebujem=mini;
        }
        else
        {
            vys+=A[kon];
            potrebujem--;
            if(potrebujem==0) zlava=2;
            kon--;
        }
    }
    printf("%d\n",vys);
return 0;
}
