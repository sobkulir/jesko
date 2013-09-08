#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n<3) printf("-1\n");
    else {
        for(int i=1; i<n; i++) printf("%d ",n-i+1);
        printf("1\n");
    }
}
