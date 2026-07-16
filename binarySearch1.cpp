#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int tar){
    int st=0 ,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
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

int rotatedArray(vector<int>arr,int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid =st+(end-st)/2;
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && tar<=arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }

        }
        if(arr[mid]<=arr[end]){
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        if(tar==arr[mid]){
            return mid;
        }
    }
    return -1;
}


int main(){
    vector<int>arr1={-1,0,3,4,5,9,12};//odd
    int tar1=12;
    vector<int> arr2={-1,0,3,5,9,12};//even
    int tar2=0;
    //cout<<binarySearch(arr2,tar2);
    //return 0;
    vector<int>arr3={3,4,5,6,7,0,1,2};
    int tar3=0;
    cout<<rotatedArray(arr3,tar3);
    return 0;

}
