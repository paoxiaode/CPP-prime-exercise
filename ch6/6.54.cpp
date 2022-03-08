#include <iostream>
#include <vector>
using namespace std;

int func(int, int);
vector<decltype(func)*> v;

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int main(){
    v.push_back(add);
    v.push_back(sub);
    v.push_back(mul);
    for (auto f:v){
        cout << f(2,2) << " ";
    }
}