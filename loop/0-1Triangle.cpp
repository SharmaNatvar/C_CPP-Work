#include<iostream>
using namespace std;

// 0-1 Triangle
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main(){

    int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j<=5;j++){
            if(j%2==0){
                cout<<"0 ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}




// other way
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         int sum=i+j;
//         if(sum%2==0){
//             cout<<1;
//         }
//         else{
//             cout<<0;
//         }
//     }
//     cout<<endl;
// }