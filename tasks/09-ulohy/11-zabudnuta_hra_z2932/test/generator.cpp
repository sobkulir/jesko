#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  srand(time(NULL));
  int n=rand()%900+100;
  int A[1047][1047];
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) A[i][j]=i*n+j;
  int swap=n*n+rand()%1047;
  while(swap--)
  {
    int x1=rand()%n,y1=rand()%n,x2=rand()%n,y2=rand()%n;
    int pom=A[x1][y1];
    A[x1][y1]=A[x2][y2];
    A[x2][y2]=pom;
  }
  //vypis maticu
  printf("%d\n",n);
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++) printf("%d ",A[i][j]); printf("%d\n",A[i][n-1]);}
  int k=rand()%100000+888888;
  printf("%d\n",k);
  for(int i=0; i<k; i++)
    printf("%d\n",(rand()%(n*n-1))+1);
return 0;
}