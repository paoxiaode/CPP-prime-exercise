#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int> v1;
    while(cin>>n){
        v1.push_back(n);
    }

    for(int i = 0;i<v1.size()/2;i++){
        cout << v1[i] + v1[v1.size() -1-i] << " ";
    }
}