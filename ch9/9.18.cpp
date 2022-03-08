#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<sstream>
using namespace std;

int main(){
    deque<string> sque;
    istringstream iss;
    string s;
    while(cin>>s)sque.push_back(s);
    for(auto i=sque.begin(); i != sque.end(); ++i){cout << *i << " ";}
}