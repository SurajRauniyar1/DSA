#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target){
    int n = nums.size();
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n; j++){
            return{i,j};
        }
    }
    return {};
}


vector<int> twoSum1(vector<int>&nums, int target ){
    unordered_map<int,int> mp;
    for(int i = 0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(mp.find(complement)!=mp.end()){
            return{mp[complement],i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums={2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum1(nums,target);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}