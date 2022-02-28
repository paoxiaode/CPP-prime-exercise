#include<iostream>
#include<fstream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    string filename("num.txt");
    ifstream input(filename);
    vector<int> vec;
    int num;
    while(input >> num){
        vec.push_back(num);
    }

    //find sample
    int val = 1;
    auto result = find(vec.cbegin(), vec.cend(), val); // const iteration
    cout << (result == vec.cend()? "is not present":"is present") << endl;//lambda simplify

    //count sample
    auto cont = count(vec.cbegin(), vec.cend(), val);
    printf("The number of %d is %ld \n", val, cont);

    //accumulate sample
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    printf("The sum is %d\n", sum);

    vec.clear();
    // 添加10个元素到vec 插入迭代器
    fill_n(back_inserter(vec), 10, 0);
    printf("vec shape %ld ", vec.size());
    for(auto&i: vec)cout << i << " ";
    cout << endl;

    
}