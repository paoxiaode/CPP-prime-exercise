#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>::iterator s, vector<int>::iterator last){
    if(s != last){
        cout << *s <<" ";
        return print(++s,last);
    }
}

int main()
{
    vector<int> v = {1,23,4,5,6};
    print(v.begin(), v.end());
}
