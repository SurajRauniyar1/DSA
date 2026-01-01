// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         char c='A';
//         for(int j=1;j<=n;j++){

//             cout<<c;
                //c=c+1;
            
//         }
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=n;j++){

//             cout<<num;
//             num=num+1;
//         }
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=i;j++){

//             cout<<i<<" ";
//             num=num+1;
//         }
//         cout<<"\n";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=1;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j>0; j--)
        {
            /* code */
            cout<<num;
            num++;
        }
        
        cout<<"\n";
    }
}