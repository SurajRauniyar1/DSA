#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<n;i++){
        for(int j=i; j<n;j++){
            for(int st=i;st<=j;st++){
                cout<<arr[st];
            }
            cout<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
}
