#include<iostream>
#include<fstream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec{1,3,4,5};
    fill_n(vec.begin(), vec.size(), 0);
    for(auto &i: vec)cout << i << " ";
    cout << endl;
}