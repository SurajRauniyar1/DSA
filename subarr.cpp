// //subarr=(n*(n+1))/2

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n=9;
//     int arr[n]={1,2,3,4,5,6,7,8,9};
//     int maxSum=INT_MIN;
    
//     for (int st = 0; st < n; st++)
//     {   
//         for(int end=st; end<n; end++){
//             for (int i = st; i <=end; i++)////123456789 1
//             {
//                 cout<<arr[i];
//             }
//             cout<<" ";
            
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
//subarr=(n*(n+1))/2

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=9;
    int arr[n]={1,2,3,4,5,6,7,8,9};
    int maxSum=INT_MIN;
    
    for (int st = 0; st < n; st++)
    {   
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum +=arr[end];
            maxSum=max(currSum,maxSum);
            
        }
    }
    cout<<maxSum<<endl;
    
    return 0;
}