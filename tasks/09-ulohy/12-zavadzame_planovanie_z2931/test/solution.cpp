/***********************************/
/* Riesenie 29r/3k/1               */
/* by Imp                          */
/***********************************/

#include <cstdio>
using namespace std;

bool used[1000050];

int main() {
  int N, K;
  scanf("%d %d", &N, &K);

  for (int i = 1; i <= N; i++)
    used[i] = false;

  for (int i = 0; i < K; i++) {
    int x;
    scanf("%d", &x);
    used[x] = true;
  }

  int c = 0;

  for (int i = 1; i <= N; i++)
    if (!used[i]) {
      printf("%s%d", (c ? " " : ""), i);
      if (++c == 10) break;
    }

  putchar('\n');

  return 0;
}
