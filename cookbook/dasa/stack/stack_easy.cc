const int MAXN = 1000000;
int zasobnik[MAXN];
int s = 0; // size of stack

int SIZE(){
    return s;
}

int TOP(){
    return zasobnik[s-1];
}

void POP(){
    --s;
}

void PUSH(int x){
    zasobnik[s] = x;
    ++s;
}
