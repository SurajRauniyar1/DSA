#include<iostream>
#include<vector>
using namespace std;

int powerC(int x,int n){
    int ans=1;
    int binForm=n;
    while(binForm>0){
        if(binForm % 2==1){
            ans *=x;
        }
        x *=x;
        binForm/=2;
    }
    return ans;
}

int main(){
    int x=2,n=10;
    cout<<powerC(x,n);
    return 0;
}

