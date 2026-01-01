//  #include<iostream>
//  using namespace std;


// void reverseArray(int array[],int size){
//     int start=0, end=size-1;
//     while(start<end)
//     {
//         swap(array[start],array[end]);
//         start++;
//         end--;
        
//     }
    
// };

//  int main(){
//     int arr[]={5,4,6,7,2,9};
//     int sz=6;
//     reverseArray(arr,sz);
//     for (int i = 0; i < sz; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
//  }






#include<iostream>
using namespace std;



void reverseArray(int array[],int sz){
        int start=0, end=sz-1;
        while(start<end){
                swap(array[start],array[end]);
                start++,end--;
        }
}

int main(){
    int arr[]={4,5,8,7,2,3,6,4,1};
    int size=9;
    reverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}


















