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
    string filename("D:\\codefield\\CppPrimeExercise\\ch8\\2.txt");
    vector<personInfo> people;
    string line, word;
    ifstream ifs(filename);
    stringstream ss;
    ss << "faa asdas"<< "saf a";
    string a ;
    cout << ss.str();
}