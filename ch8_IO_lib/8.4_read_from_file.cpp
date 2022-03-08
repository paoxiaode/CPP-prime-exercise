#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void read_perline(string filename){
    ifstream input(filename);
    if(input){
        vector<string> result;
        string tmp;
        while(std::getline(input,tmp)){
            result.push_back(tmp);
        }
        for(const string& s:result){
            cout << s << endl;
        }
        input.close();
    }
    else{
        cout << "read fail" << endl;
    }
    
    
}

void read_perword(string filename){
    ifstream input(filename);
    fstream fs(filename, ifstream::app);
    if(input){
        vector<char> result;
        char ch;
        while(input >> ch){
            result.push_back(ch);
        }
        for(const char& s:result){
            cout << s << " ";
        }
        cout << endl;
        input.close();
    }
    else{
        cout << "read fail" << endl;
    }
    
    
}
void read_number(string filename){
    ifstream input(filename);
    ofstream output("num_write.txt");
    if(input){
        vector<long> result;
        long ch;
        while(input >> ch){
            output << ch << "\n";
        }
        input.close();
        output.close();
    }
    else{
        cout << "read fail" << endl;
    }
    
    
}

int main(){
    cout<< "test" << endl;
    read_perline("1.txt");
    // read_perword("D:\\Codefield\\Cpp-premier-exercise\\ch8\\1.txt");
    // read_number("D:\\Codefield\\Cpp-premier-exercise\\ch8\\num.txt");

    // read_("1.txt");


}