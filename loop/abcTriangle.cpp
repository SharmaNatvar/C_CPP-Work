#include<iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E

int main(){
    char i,j;
    for(i='A';i<='E';i++){
        // char alp='A';
        for(j='A';j<=i;j++){
            cout<<i;
            // alp++;
        }
        cout<<endl;
    }
    return 0;
}