#include<iostream>
using namespace std;
int main(){
    int n;
    int sum1=0;
    cout<<"enter the number ";
    cin>>n;
    for(int i=0; i<=n;i++){
        if (i % 3 ==0){
            sum1=sum1+i;
        }
        
        
    }
    cout<< sum1;
    return 0;
}