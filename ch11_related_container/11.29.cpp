#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main(){
    std::map<string, int> mp;
    mp["a"] = 1;
    mp["c"] = 1;

    auto iter = mp.equal_range("b");
    cout << iter.first->first << iter.second->first << endl;
}