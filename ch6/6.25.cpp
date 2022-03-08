#include <iostream>
using namespace std;

void Swap_intpointer(int*&i, int* &j){
    int* tmp = i;
    i = j;
    j = tmp;
}

int main(int argc, char* argv[]){
    string str;
    for(int i = 1; i != argc; i++){
        str += string(argv[i]);
    }
    cout << str << endl;
    return 0;
}