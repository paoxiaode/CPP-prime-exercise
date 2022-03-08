#include <string>
#include <iostream>
using namespace std;

#include <string>
#include <iostream>

class Sales_data {
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){ cout << "3 para" << endl;}
    Sales_data():Sales_data("", 0, 0){cout << "moren" << endl;}
    Sales_data(const std::string &s):Sales_data(s, 0, 0){}
    Sales_data(std::istream &is):Sales_data() { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions.
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend functions
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    cout << "read function" << endl;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main(){
    Sales_data s1(cin);
}