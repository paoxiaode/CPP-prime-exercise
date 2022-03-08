#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v={1,3,4,5,6,7};
    for(auto& a:v){
        // if(a&1){a*=2;}
        a = (a&1)? 2*a:a;
    }
    for(const auto a:v){
        cout << a << " ";
    }
}

