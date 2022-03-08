#include <iostream>
using namespace std;

int CallCount(){
    static int cnt = 0;
    return cnt++;
}

int main(){
    for(int i = 0; i < 10; ++i){
        cout << CallCount() << " ";
    }

}