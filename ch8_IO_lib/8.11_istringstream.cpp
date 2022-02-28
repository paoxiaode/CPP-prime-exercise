#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

struct PersonInfo{
    std::string name;
    vector<string> phone_number;
};

vector<PersonInfo> read_string_from_file(ifstream& in){
    vector<PersonInfo> result;
    string line, phones;
    istringstream record;

    while (getline(in, line))
    {
        PersonInfo person;
        record.clear();
        record.str(line);
        record >> person.name;
        while(record >> phones){
            person.phone_number.push_back(phones);
        }
        result.push_back(person);
    }
    return result;
}

int main(){
    string filename("2.txt");
    ifstream input(filename);
    vector<PersonInfo> info;
    if(input){
        info = read_string_from_file(input);
    }
    else{
        cout << "read fail" << endl;
    }
    cout << info.size() << endl;
    for(auto i: info){
        cout << i.name << " ";
        for(auto j: i.phone_number){
            cout << j << " ";
        }
        cout << endl;
    }
}