#include <iostream>
#include <vector>
using namespace std;

bool compare(int*const ben1,int*const end1,int*const ben2,int*const end2){
    if(end1-ben1!=end2-ben2){return false;}
    else{
        for(int*i = ben1,*j = ben2;i!=end1;i++,j++){
            if(*i==*j){continue;}
            else{return false;}
        }
    }
    return true;
}

int main(){
    int arr[] = {1,3,4,5};
    int arr1[] = {1,3,4,5};

    if (compare(begin(arr), end(arr), begin(arr1), end(arr1))){
        cout << "same";
    }else{cout << "diff";}
    try{

    }
    catch(runtime_error s){

    }
}
