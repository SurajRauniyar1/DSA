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
    int a=10;
    //cout<<a<<endl;
   // point2(a);
    //cout<<a;
    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
}