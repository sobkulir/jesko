#include<cstdio>
#include<algorithm>
using namespace std;

int G[147][147];
int A[147];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++) scanf("%d",&A[i]);
    for(int i=0; i<m; i++) {
        int x,y;
        scanf("%d %d",&x,&y);
        x--; y--;
        G[x][y]=G[y][x]=1;
    }
    int res=1000000000;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                if(G[i][j]==1 && G[j][k]==1 && G[k][i]==1) res=min(res,A[i]+A[j]+A[k]);
    if(res==1000000000) res=-1;
    printf("%d\n",res);
}
