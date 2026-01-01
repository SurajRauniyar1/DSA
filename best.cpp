#include<iostream>
#include<vector>
using namespace std;

int BestTime(vector<int>&Prices){
    int bTime=Prices[0],maxProfit=0;
    for(int i=1; i<Prices.size(); i++){
        if(Prices[i]>bTime){
            maxProfit=max(maxProfit,Prices[i]-bTime);
        };
        bTime=min(bTime,Prices[i]);
    }
    return maxProfit;
}


int main(){
    vector<int> nums={7,1,4,9,8,5};
    cout<<BestTime(nums);
    return 0;
}