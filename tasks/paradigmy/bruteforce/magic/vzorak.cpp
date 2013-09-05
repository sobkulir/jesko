#include<cstdio>
#include<algorithm>
using namespace std;

bool T[10];

bool over(int a) {
    for(int i=0; i<10; i++) T[i]=false;
    while(a>0) {
        if(T[a%10]) return false;
        T[a%10]=true;
        a/=10;
    }
    return true;
}

int main(){
    int n;
    scanf("%d",&n);
    n++;
    while(!over(n)) n++;
    printf("%d\n",n);
}
