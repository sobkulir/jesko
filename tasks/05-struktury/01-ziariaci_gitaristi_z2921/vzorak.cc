#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int N;
    scanf(" %i", &N);

    vector<stack<int> > struny(7); // aby som sa nemusel babrat s 
                                   // preocislovanim strun

    int res = 0;

    for(int i = 0; i < N; ++i){
        int struna, prazec;
        scanf(" %i %i", &struna, &prazec);
        while(!struny[struna].empty() && struny[struna].top() > prazec){
            struny[struna].pop();
            ++res;
        }
        if(!struny[struna].empty() && struny[struna].top() < prazec || 
            struny[struna].empty()){
            struny[struna].push(prazec);
            ++res;
        }
    }

    printf("%i\n", res);   
}
