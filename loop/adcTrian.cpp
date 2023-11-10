#include<iostream>
using namespace std;

// E E E E E
// D D D D
// C C C
// B B
// A

int main(){
    int i,j;
    for(i=5; i>=1;i--){
        char alp='E';
        for(j=1;j<=i;j++){
            cout<<alp;
        }
        alp--;
        cout<<endl;
    }
    return 0;
}