#include <iostream>
#include <vector>
#include <string>
using namespace std;

pair<string, int> process(istream& input){
    string str;
    int num;
    input >> str >> num;
    return {str, num};
}

int main(){
    vector<pair<string, int>> pair_vec;
    while(cin){
        pair_vec.push_back(process(cin));
    }
    for(const auto& i: pair_vec){
        cout << i.first << " " << i.second << endl;
    }
}