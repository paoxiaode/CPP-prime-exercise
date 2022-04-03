#include<iostream>
#include<vector>


int main(){
    std::vector<int> v{1,2,3,4};
    for(auto i = v.crbegin(); i != v.crend(); i++){std::cout << *i <<std :: endl;}
}