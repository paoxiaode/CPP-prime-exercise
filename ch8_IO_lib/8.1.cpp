#include<iostream>
using namespace std;

istream& read_(istream& is){
    string s;
    while(is>>s){
        cout << s << endl;
    }
    is.clear();
    return is;
}

int main(){
    read_(cin);

}