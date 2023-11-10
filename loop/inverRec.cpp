#include<iostream>
using namespace std;

// inverted half pyramid

// * * * * *
// * * * *
// * * *
// * *
// *

int main(){

    int i,j;

    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}