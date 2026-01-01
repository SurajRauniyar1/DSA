#include<iostream>
using namespace std;

// int main(){
//     int min=INT_MAX;
//     int max=INT_MIN;
//     int sz=5;
//     int marks[sz]={98,99,96,95,92};
//     //marks[0]=101;
//     // cout<<marks[0];
//     // cout<<sz;
//     // for (int i = 0; i <sz; i++)
//     // {
//     //     /* code */cout<<marks[i]<<endl;
//     // }
    
//     // for (int i = 0; i < sz; i++)
//     // {
//     //     cin>>marks[i];
//     // }
//     for (int i = 0; i < sz; i++)
//     {
        
//         if (marks[i]<min){
//             min=marks[i];
//         }
        
//         if (marks[i]>max){
//             max=marks[i];
//         }
       
//     }
//     cout<<"Smalleest value : "<<min<<endl;
//      cout<<"Largest value : "<<max<<endl;
    
//     return 0;
// }

void array1(int arr[],int size ){
    cout<<"in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
    
}

int linearSearch(int arr[],int sz, int target){
    for (int i = 0; i < sz; i++)
    
    {
        if(arr[i]==target){

            return i;
        }
        
        }
        
        return -1;

}

int main(){
    int result;
    int arr[]={4,2,7,8,6,5,1};
    int sz=7;
    int target=1;
    cout<<linearSearch(arr,sz,target);
    return 0;
}

// int main (){
//     int arr[]={1,2,3};
//     array1(arr,3);
    
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<arr[i]<<" ";
//         /* code */
//     }
//     cout<<endl;
//     return 0;   
// }