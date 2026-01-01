#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        //int mid = st+(end-st)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int recBinarySearch(vector<int>arr,int tarr,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tarr>arr[mid]){
            return recBinarySearch(arr,tarr,mid+1,end);
        }
        else if(tarr<arr[mid]){
            return recBinarySearch(arr,tarr,st,mid-1);
        }
        else {
            return mid;
        }
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[st]<=nums[mid]){
                //left-sorted
                if(nums[st]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    st=mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

int search(vector<int>&A, int tar){
    int st=0,end=A.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid]==tar){
            return mid;
        }
        //left-sorted
        if(A[st]<=A[mid]){
            if(A[st]<= tar && tar <=A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }

        }
        else{
            if(A[mid]<= tar && tar <=A[end]){
                st=mid+1;
            }
            else{
                end=mid +1;
            }
        }
    }
}

int findPeakElement(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            
            if(nums[mid]<nums[mid+1]){
                st=mid+1;
            }
            else{
                end= mid;
            }
        }
        return st;
    }

int main(){
    int target=5;
    vector<int> vec1={1,3,5,6,7,8,9 };
    int st=0, end=vec1.size()-1;
    cout<<binarySearch(vec1,target)<<endl;
    cout<<recBinarySearch(vec1,target,st,end);
    return 0; 
}