#include<iostream>
#include<fstream>
#include<set>
#include<map>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

map<string, string> mp_build(ifstream & mapfile){
    string text;
    istringstream iss;
    string key, value;
    map<string, string> mp;
    while(getline(mapfile, text)){
        iss.str(text);
        iss >> key >> value;
        mp[key] = value;
    }
    return mp;
}

void word_translation(ifstream &mapfile, ifstream & srcfile){
    map<string, string> mp = mp_build(mapfile);
    string text;
    while(getline(srcfile, text)){
        istringstream iss(text);
        string word;

        while(iss >> word){
            if(mp.find(word) != mp.end()){
                cout << mp[word] << " ";
            }
            else cout << word << " ";
        }
        cout << endl;
        
    }
}

int main(){
    string file_src("src/src_11.33.txt");
    string file_map("src/map_11.33.txt");
    ifstream mapfile(file_map);
    ifstream srcfile(file_src);
    word_translation(mapfile, srcfile);
}