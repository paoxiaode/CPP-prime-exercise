#include <iostream>
using namespace std;

void Swap_int(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main(){
    int a=2, b = 3;
    Swap_int(&a, &b);
    cout << a << " " << b;
    return 0;
}