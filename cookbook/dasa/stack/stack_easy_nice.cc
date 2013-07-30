const int MAXN = 1000000;

struct zasobnik{
    int a[MAXN];
    int s;

    zasobnik(){
        s = 0;
    }

    int size(){
        return s;
    }

    int top(){
        return a[s-1];
    }

    void pop(){
        --s;
    }

    void push(int x){
        a[s] = x;
        ++s;
    }
}
