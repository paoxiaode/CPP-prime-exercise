#include <iostream>
using namespace std;

class book{
        friend void read(istream&, book&);
    public:
        book(unsigned isbin, const string& name, const string& author):isbin_(isbin),name_(name),author_(author){}
        book():book(0, "", ""){}
        book(istream& i):book(){read(i, *this);}
        
        void get(){
            cout << isbin_ << name_ << author_ << endl;
        }
    private:
        unsigned isbin_;
        string name_;
        string author_;
};

void read(istream& is, book& item){
    is >> item.isbin_ >> item.name_ >> item.author_;
    cout << "read func" << endl;
    return;
}

int main(){
    book b1(1,"nono","ljh");
    b1.get();
    book b2(cin);
    b2.get();
}