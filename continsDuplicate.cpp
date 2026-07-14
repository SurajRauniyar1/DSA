#include<vector>
#include<unordered_set>
#include<iostream>
using namespace std;

class Solution{
    public:
bool containsDuplicate(vector<int>&nums){
    unordered_set<int> st;
    for(int num:nums){
        if(st.find(num)!=st.end()){
            return true;
        }
        st.insert(num);
        
    }
    return false;
}
};

int main(){
    Solution obj;
    vector<int>nums ={1,2,3,1};
    if(obj.containsDuplicate(nums)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}