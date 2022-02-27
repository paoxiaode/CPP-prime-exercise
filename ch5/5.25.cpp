#include <iostream>
#include <vector>
using namespace std;


int main(){
    for(int i,j=0;cout<<"Input two integers: ",cin >> i >> j;){
        try{
            if(j==0)throw runtime_error("Divide by zero");
            cout << i/j << endl;
        }
        catch(runtime_error err){
            cout << err.what() << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

}
