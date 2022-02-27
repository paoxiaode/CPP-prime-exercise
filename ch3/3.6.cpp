#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(char& c:s){
        if(isalpha(c)){
            c = 'X';
        }
    }
    cout << s << endl;
}

//3.10
