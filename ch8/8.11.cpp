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
    if(ifs){
        while(getline(ifs, line)){
            ss.clear();
            ss.str(line);
            personInfo person;
            ss >> person.name;
            while(ss >> word) person.phoneNum.push_back(word);
            people.push_back(person);
        }
        for(const auto& p: people){
            cout << p.name << " " << p.phoneNum[0];
        }
    }
    else cout << "read fail" << endl;

}