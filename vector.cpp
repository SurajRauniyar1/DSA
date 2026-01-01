#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec={1,2,3};
    // cout<<vec[0]<<endl;

    vector<char> vec={'a','b','c','m','e','g','h'};
    for(char val:vec){
        cout<<val<<endl;
    }
    vector<int> arr={1,2,3,4,5,6,7,8};
    for(int i:arr){
    cout<<i<<endl;
}
    return 0;
}

//vec.size
//vec.push_back(10);
//vec.pop_back();
//vec.front();
//vec.back();
//vec.at(1);
//vec.sozr();
//vec.capacity();

//n^n=0
//n^0=n