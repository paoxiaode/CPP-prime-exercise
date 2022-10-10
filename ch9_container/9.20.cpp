#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<sstream>
using namespace std;

int main(){
    list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int>  Eque, Oque;
    istringstream iss;
    for(const auto&i:l)
    {
        (i&1 ? Oque:Eque).push_back(i);
    }
    for(const auto& i:Eque)cout << i << endl;
}