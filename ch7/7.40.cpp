#include <iostream>
using namespace std;

class book{
    public:
        book(unsigned isbin, const string& name, const string& author):isbin_(isbin),name_(name),author_(author){}
        void get(){
            cout << isbin_ << name_ << author_ << endl;
        }
    private:
        unsigned isbin_;
        string name_;
        string author_;
};

int main(){
    book b1(1,"nono","ljh");
    b1.get();
}