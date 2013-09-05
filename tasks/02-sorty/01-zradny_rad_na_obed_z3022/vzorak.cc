#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    scanf(" %i", &N);

    string lux = "Luxusko";

    int lux_pos = -1; // Luxuskova povodna pozicia
    int lux_less = 0; // mensie ako Luxusko riadky

    for(int i = 0; i < N; ++i){
        char b[100];
        scanf(" %s", b);
        string x(b);

        if(x < lux) ++lux_less;
        else if (x == lux) lux_pos = i;
    }

    if(lux_less == lux_pos){
        printf("neposunie sa\n");
    }
    else if(lux_less > lux_pos){
        printf("o %i dozadu\n", lux_less - lux_pos );
    }
    else{
        printf("o %i dopredu\n", lux_pos - lux_less);
    }
}
