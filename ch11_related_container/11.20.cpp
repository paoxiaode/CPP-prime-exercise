#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main(){
    std::map<std::string, size_t> word_count;
    std::string word;
    while(cin >> word){
        // //same
        // auto ret = word_count.insert({word, 1});
        // if(!ret.second){
        //     ret.first->second ++;
        // }
        ++ word_count.insert({word, 0}).first->second;
    }
    for(auto i: word_count){
        cout << i.first << " " << i.second << endl;
    }
}