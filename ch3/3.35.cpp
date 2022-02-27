#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,3,4,5};
    int* i = arr;
    for(;i!=&arr[4];i++){
        *i = 0;
    }

    for(int i = 0;i<4;i++){
        cout << arr[i];
    }
}
