#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

int main(){
    std::map<std::string, size_t> word_count;
    std::string word;
    while(cin >> word){
        word_count[word] ++;
    }
    for(auto i: word_count){
        cout << i.first << " " << i.second << endl;
    }
}