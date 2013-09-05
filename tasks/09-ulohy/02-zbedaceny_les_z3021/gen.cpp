#include <cstdio>
#include <cstdlib>
#include <ctime>
#define t 1000000000

int main(){
  srand(time(NULL));
  int maxN;
  scanf("%d", &maxN);
  int n = rand()%maxN+1;

  printf("%d\n", n);
  for(int i = 0; i < n; i++)
    printf("%d %d\n", rand()%n+1, rand()%t+1);
}
