//potrebný include
#include <algorithm>

//prvky, ktoré chcem permutovať
vector<int> permutacia;
//musím si prvky zoradiť
sort(permutacia.begin(),permutacia.end());
do{
    //v poli permutacia je ďalšia permutácia, tak ju spracujeme
}while(next_permutation(permutacia.begin(),permutacia.end()))
