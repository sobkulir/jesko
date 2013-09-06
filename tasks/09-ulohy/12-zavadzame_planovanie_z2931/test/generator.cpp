/*********************************/
/* Generator vstupov k 29r/3k/1  */
/* by Imp                        */
/*********************************/

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

int Ns[15] = {100, 200, 300, 400, 500,
              1000, 2000, 3000, 4000, 5000,
	      500000, 800000, 900000, 999999, 1000000
             };

int Ks[15] = {5, 50, 200, 380, 490,
              10, 1000, 2800, 3900, 4990,
              100, 500000, 800000, 999900, 999990
             };

char filename[200];
bool used[1000050];

int main() {
  //sample: (100, 4) (3 5 20 47)

  srand(time(NULL));

  for (int i = 0; i < 15; i++) {
    sprintf(filename, "%02d.in", i + 1);
    FILE* f = fopen(filename, "w");
    
    if (Ks[i] > Ns[i] / 2) {
      int x;

      for (int j = 0; j < Ns[i]; j++)
        used[j] = true;
      for (int j = 0; j < Ns[i] - Ks[i]; j++) {
        while (!used[x = rand() % Ns[i]]) {};
        used[x] = false;
      }

    } else {
      int x;

      for (int j = 0; j < Ns[i]; j++)
        used[j] = false;
      for (int j = 0; j < Ks[i]; j++) {
        while (used[x = rand() % Ns[i]]) {};
        used[x] = true;
      }
    }

    vector<int> v;

    for (int j = 0; j < Ns[i]; j++)
      if (used[j])
        v.push_back(j + 1);

    random_shuffle(v.begin(), v.end());

    fprintf(f, "%d %d\n", Ns[i], Ks[i]);
    for (unsigned int j = 0; j < v.size(); j++)
      fprintf(f, "%s%d", (j ? " " : ""), v[j]);
    fprintf(f, "\n");

    fclose(f);
  }

  return 0;
}
