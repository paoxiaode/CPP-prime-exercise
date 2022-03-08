#include <iostream>
#include <initializer_list>
using namespace std;

int Sum(initializer_list<int>& a){
    int sum = 0;
    for (auto i = a.begin(); i != a.end(); ++i){
        sum += *i;
    } 
    return sum;
}

int main(){
    auto a = {1,2,3,4,5,6};
    cout << Sum(a);
}