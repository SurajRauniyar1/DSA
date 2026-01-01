#include<iostream>
using namespace std;

int sum (int a, int b){
    int s= a+b;
    return s;
}

int factorial(int n){
    int fact =1;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        fact *=i;
        
    }
    return fact;
    
}
int main(){
    //cout<<sum(10,20);
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}