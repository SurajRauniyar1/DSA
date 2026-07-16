// int * ptr=&a;
#include<iostream>
using namespace std;

void point(){
    int a=10;
    cout<<a<<endl;
    int* aa=&a;
    int** bb=&aa;
    int*** cc=&bb;
    cc=cc+10;
    cout<<*(&a)<<" "<<*(aa)<<" "<<" "<<" "<<**(bb)<<" "<<" "<<***(cc);
}


void point1(int* x){
  *x=*x+10;
}

void point2(int &a){
    a=a+50;
}

int main(){
//     int a=10;
//     //cout<<a<<endl;
//    // point2(a);
//     //cout<<a;
//     int arr[]={1,2,3,4,5};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
    int a =10;
    int* ptr = &a;
    int**ptrr=&ptr;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptrr<<endl;
    cout<<&ptrr<<endl;
    cout<<*ptrr<<endl;
    cout<<**ptrr<<endl;
    **ptrr=20;
    cout<<a<<endl;
    cout<< *(&a);
    return 0;
}