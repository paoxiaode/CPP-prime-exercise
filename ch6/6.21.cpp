#include <iostream>
using namespace std;

int Compare(int i, int* const j){
    if (i>*j) return i;
    else {
        *j = 2;
        return *j;
    }
}

int main(){
    int i = 0, j = 1;
    cout << Compare(i, &j);
}