#include <iostream>
using namespace std;

void Swap_intpointer(int*&i, int* &j){
    int* tmp = i;
    i = j;
    j = tmp;
}

int main(){
    int i = 0, j = 1;
    auto pi = &i;
    auto pj = &j;
    Swap_intpointer(pi, pj);
    cout << *pi << *pj;
}