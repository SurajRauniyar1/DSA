#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int>&ht){
    int maxWater=INT_MIN;
    for(int i=0;i<ht.size(); i++){
        for (int j = i+1; j < ht.size(); j++)
        {
            int w=j-1;
            int h=min(ht[i],ht[j]);
            int area=(w*h);
            maxWater=max(maxWater,area);
        }
        
    }
    return maxWater;
};

int maxW(vector<int>&height){
    int n=height.size();
    int lh=0,rh=n-1;
    int maxWater=0;
    while(lh<rh){
        int w=rh-lh;
        int ht=min(height[lh],height[rh]);
        int currWater=w*ht;
        maxWater=max(maxWater,currWater);
        height[lh]<height[rh]? lh++:rh--;
    }
    return maxWater;
    
};

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxW(height);
    return 0;
}