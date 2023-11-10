#include<iostream>
using namespace std;

// A B C D E
// A B C D
// A B C
// A B
// A

int main(){
    int i,j;
    for(i=5; i>=1; i--){
        char alp='A';
        for(j=1;j<=i;j++){
            cout<<alp<<" ";
            alp++;
        }
        cout<<endl;
    }
    return 0;
}