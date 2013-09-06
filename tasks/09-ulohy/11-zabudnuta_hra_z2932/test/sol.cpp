#include <cstdio>
using namespace std;

int A[1047][1047];

int main()
{
  int n;
  scanf("%d ",&n);
  int x0,y0;
  for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++) {scanf("%d ",&A[i][j]); if(A[i][j]==0) {x0=i; y0=j;}}
  int k;
  scanf("%d ",&k);
  for(int i=0; i<k; i++)
  {
    int x;
    scanf("%d ",&x);
    int dx[]={0,0,1,-1};
    int dy[]={1,-1,0,0};
    for(int j=0; j<4; j++)
    {
      if(A[x0+dx[j]][y0+dy[j]]==x) {A[x0][y0]=x; A[x0+dx[j]][y0+dy[j]]=0; x0+=dx[j]; y0+=dy[j]; break;}
    }
  }
  for(int i=1; i<=n; i++){
    for(int j=1; j<n; j++) printf("%d ",A[i][j]); printf("%d\n",A[i][n]);}
return 0; 
}