#include<iostream>
#include<set>
#include<map>
#include<string>
#include<fstream>
using namespace std;

string process_str(string str){
    for(auto & word: str){
        word = tolower(word);
    }
    string punctuation("()[]{}\"':*-;,.");
    if(str.find_first_of(punctuation) != str.npos){
        str.erase(str.find_first_of(punctuation), str.size()-str.find_first_of(punctuation));
    }
    return str;
}

int main(){
    string pt("test.txt");
    ifstream input(pt);
    std::map<std::string, size_t> word_count;
    std::string word;
    while(input >> word){
        word = process_str(word);
        word_count[word] ++;
    }
    for(auto i: word_count){
        cout << i.first << " " << i.second << endl;
    }
}