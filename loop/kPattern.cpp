#include<iostream>
using namespace std;

int main(){
    int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1){
                cout<<"* ";
            }
            else if((i+j)==6){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--){
        for(j=1;j<=5;j++){
            if(j==1){
                cout<<"* ";
            }
            else if((i+j)==6){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0; 
}