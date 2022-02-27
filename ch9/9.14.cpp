#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main(){
    list<const char*> l{ "hello", "world" };
    vector<string> v;
    v.assign(l.cbegin(), l.cend());
    cout << v.size();
}