#include<iostream>
using namespace std;

int main(){
    int i,n,sum=1;

    cout<<"enter the number";
    cin>>n;

    for(i=1;i<=n;i++){
        sum=sum*i;
    }

    cout<<"factorial : "<<sum;

    return 0;
}