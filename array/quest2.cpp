#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"enter the value of array : ";
    cin>>n;
    int arr[n];
    // cout<<"arr[]:"<<arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the element of array : ";
        cin>>arr[n];
    }
    for(i=0;i<n;i++){
        cout<<"your arry is : "<<arr[n]<<endl;
    }

    return 0;
}