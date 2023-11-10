#include<iostream>
using namespace std;

int main(){

    int i, marks[5];
    float sum,arg,per;
    cout<<"enter the marks of subject "<<endl;
    cout<<"hindi : ";
    cin>>marks[0];
    cout<<"english : ";
    cin>>marks[1];
    cout<<"sst : ";
    cin>>marks[2];
    cout<<"sci : ";
    cin>>marks[3];
    cout<<"math : ";
    cin>>marks[4];

    for(i=0;i<5;i++){
        sum+=marks[i];
        arg=sum/5;
        per=(sum/500)*100;
    }
        cout<<"total sum"<<sum<<endl;
        cout<<"averg number"<<arg<<endl;
        cout<<"perstag :"<<per<<"%"<<endl;

    return 0;
}
