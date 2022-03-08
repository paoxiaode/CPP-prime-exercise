#include<iostream>
#include<fstream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

void elimDups(vector<string>& words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool stringlarger(const string& s){
    return s.size()>3;
}

int main(){
    vector<int> vec{1,3,4,5};

    //10.3
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    cout << "the sum of vector is " << sum <<endl;

    //10.6
    fill_n(vec.begin(), vec.size(), 0);
    for(auto &i: vec)cout << i << " ";
    cout << endl;

    //10.9
    vector<string> vec_string{"fox", "jumps", "over", "quick", "red", "red", "the", "the"};
    elimDups(vec_string);
    for(auto i:vec_string) cout << i << " ";
    cout << endl;

    //10.13
    auto iter = partition(vec_string.begin(), vec_string.end(), stringlarger);
    while(--iter != vec_string.begin() - 1){
        cout << *iter << " ";
    }
    cout << endl;

}