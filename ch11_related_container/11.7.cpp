#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
using namespace std;
using famimap = map<string, vector<string>>;

void add_family(famimap& fami, const string str){
    if(fami.find(str) != fami.end()){
        cout << "family already exists" << endl;
    }
    else{
        fami.insert({str, vector<string>()});
    }
}

void add_family_mem(famimap& fami, const string &fm_name, const string &name){
    auto fm_iter = fami.find(fm_name);
    if(fm_iter != fami.end()){
        fm_iter->second.push_back(name);
        printf("add family %s name %s\n", fm_name.c_str(), name.c_str());
    }
    else{
        printf("family name %s don't exists\n",fm_name.c_str());
    }
}


int main(){
    famimap fami;

    add_family(fami, "a");
    add_family(fami, "a");
    add_family(fami, "b");

    add_family_mem(fami, "a", "aa");
    add_family_mem(fami, "b", "bb");
    add_family_mem(fami, "c", "bb");




}