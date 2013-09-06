/*****************************************/
/* Tester k ulohe 29r/3k/1               */
/*   - prvy argument - vstup             */
/*   - druhy argument - ich vystup       */
/*                                       */
/* Return value:                         */
/*   - 0 ak je odpoved OK                */
/*   - 1 ak nie je OK                    */
/*   - 0xDEADBEEF ak su zle parametre    */
/*   - prip. nieco ine ak to spadne :)   */
/*                                       */
/* Imp                                   */
/*****************************************/

#include <cstdio>
using namespace std;

bool used[1000050];

int main(int argc, char* argv[]) {
  if (argc < 3) return 0xDEADBEEF;

  FILE* in = fopen(argv[1], "r");
  FILE* out = fopen(argv[2], "r");

  int N, K;
  fscanf(in, "%d %d", &N, &K);

  for (int i = 1; i <= N; i++)
    used[i] = false;

  for (int i = 0; i < K; i++) {
    int x;
    fscanf(in, "%d", &x);
    used[x] = true;
  }

  for (int i = 0; i < 10; i++) {
    int x;
    if (fscanf(out, "%d", &x) != 1) return 1;
    if (x <= 0 || x > N || used[x]) return 1;

    used[x] = true;
  }

  fclose(in);
  fclose(out);
  return 0;
}
