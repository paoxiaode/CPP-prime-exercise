#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

void read_(ifstream& input){
    vector<string> result;
    string tmp;
    while(getline(input,tmp)){
        result.push_back(tmp);
    }
    int i = 0;
    for(string& s:result){
        istringstream iss(s);
        string word;
        cout << ++i << " ";
        while (iss >> word)
        {
            cout << word << " ";
        }
        cout << endl;
    }  
}

int main(){
    string filename("D:\\codefield\\CppPrimeExercise\\ch8\\1.txt");
    ifstream input(filename);
    if(input){
        read_(input);
    }
    else{
        cout << "read fail" << endl;
    }

}