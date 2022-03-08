#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include<list>
using namespace std;


int main(){
    vector<double> v1;
    list<int> l{1,3,4,5,5};
    for(auto i:l){
        v1.push_back(i);
    }
    for(const auto& i:v1)cout << i << endl;

}  