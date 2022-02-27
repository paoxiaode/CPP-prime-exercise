#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = "";
    for(char c:s){
        if(!ispunct(c)){
            s1 += c;
        }
    }
    cout << s1 << endl;
}
