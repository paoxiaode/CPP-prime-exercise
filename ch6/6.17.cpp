#include <iostream>
using namespace std;

bool UpperExist(const string& s){
    for (char c:s){
        if (isupper(c)){return true;}
    }
    return false;
}

void StringUpper(string &s){
    for (char& c:s){
        c = toupper(c);
    }
}

int main(){
    string s = "safdsA";
    if(UpperExist(s))cout << "yes" << endl;
    StringUpper(s);
    cout << s;
}