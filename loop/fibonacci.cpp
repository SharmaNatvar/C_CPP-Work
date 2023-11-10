#include<iostream>
using namespace std;
int main(){
    int i, n ,first =1, second=1, sum=0;

    cout <<"enter the number ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(i==1){
            cout<<first <<" ,";
            continue;
        }
        if(i==2){
            cout<<second;
            continue;
        }

        sum=first+second;
        first=second;
        second=sum;

        cout<<" , "<<sum;
    }

    return 0;
}