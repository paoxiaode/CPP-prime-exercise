#include <iostream>
#include <map>
#include <list>
using namespace std;


int main(){
    map<string, list<int>> word_row = {
        {"Abstract", {1,3}},
        {"Dog", {4,6}},
        {"Cat", {7}}
    };
    for(const auto &i :word_row){
        cout << "word " << i.first << "appear at row ";
        for(const auto &j: i.second){
            cout << j << " ";
        } 
        cout << endl;
    }
}