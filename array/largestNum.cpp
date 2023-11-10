#include<iostream>
using namespace std;

int main(){

    int num=0,i,arr[5]={5,10,2,8,15};

    for(i=0;i<5;i++){
        if(arr[i]>num){
            num=arr[i];
        }
    }
    cout<<"greater number : "<<num;

    return 0;
}