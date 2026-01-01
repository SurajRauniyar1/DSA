#include<iostream>
#include<vector>
using namespace std;


int singleElement(vector<int>&nums){
    int st=0, end=nums.size()-1;
    while(st<end){
        int mid=st+(end-st)/2;
        
        if((mid)%2==1){
            mid--;
        }
        if(nums[mid]==nums[mid+1]){
            st=mid+2;
        }
        else{
            st=mid+1;
        }
        return mid;
    }
    return -1;
}


int Single(vector<int>&A){

    int st=0,n=A.size(),end=n-1;
    while(st <= end){
        int mid =st+(end-st)/2;
        if(mid==0 && A[0]!=A[1]) return A[mid];
        if(mid ==n-1 && A[n-1]!=A[n-2]) return A[mid];
        if(A[mid-1]!=A[mid]&& A[mid]!= A[mid+1]) return A[mid];
        if(mid %2==0){
            if(A[mid-1]==A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
            
        }
        else{
            if(A[mid-1]==A[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}

int main(){
    vector<int>nums={1,1,2,3,3,4,4,5,5};
    cout<<singleElement(nums);
    return 0;
} 