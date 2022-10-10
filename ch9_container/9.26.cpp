#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<sstream>
using namespace std;

int main(){
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 21};
    vector<int> v1(ia, end(ia));
    list<int> l1(ia, end(ia));
    vector<int>::iterator i1 = v1.begin();
    while (i1 != v1.end())
    {
        if((*i1&1)==0){i1 = v1.erase(i1);}
        else{
            ++ i1;
        }
    }
    
    for(const auto& i:v1){
        cout << i << endl;
    }
    // cout << v.front() << endl;
    // cout << *v.begin() << endl;
}