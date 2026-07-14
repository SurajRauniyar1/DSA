#include <iostream>
using namespace std;

int main(){
    int a =5;
    int b =10;
    int* p = &a;
    p = &b;
    *p = 20;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
} 