#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10,2);
    for(auto i=v.begin();i!=v.end();i++){
        *i *= *i;
    }
    for(auto i=v.begin();i!=v.end();i++){
        cout << *i << " ";
    }
}