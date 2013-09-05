#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    ofstream vystup;
    vystup.open("test.txt");
    vystup << 99999 << ' ' << 2000000000 << ' ' << 3 << endl;
    srand(time(0));
    for (int i=0;i<99999;i++){
        vystup << rand()%2000000000 << endl;
    }
}
