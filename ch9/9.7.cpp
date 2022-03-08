#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;


struct personInfo{
    string name;
    vector<string> phoneNum;
};

int main(){
    vector<string> v1;
    vector<string>::value_type s;
    v1.push_back("asfdaf");
    s = v1[0];
    cout << s;
    vector<string>::iterator iter = v1.begin();
}  