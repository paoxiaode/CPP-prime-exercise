#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;




int main(){
    string filename("2.txt");
    ifstream ifs(filename);
    if(ifs.good()){
        cout << "the file exists" << endl;
    }
    ifs.open("3.txt");
    if(ifs.good()){
        cout << "the file exists" << endl;
    }
    ifs.close();
    ofstream ofs("3.txt");
    ofs << "the result" << endl;
    ifs.open("3.txt");

    if(ifs.good()){
        cout << "the file exists" << endl;
    }
    return 0;
}