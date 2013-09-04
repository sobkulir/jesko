#include<cstdio>
int main(){
    int a = 1234, b;
    printf("%d %d\n",a,b);
    b = (char)a;
    printf("%d %d \n",a,b);
    b = char(a);
    printf("%d %d\n",a,b);
    b = char(a)*a;
    printf("%d %d\n",a,b);
}
