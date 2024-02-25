#include<iostream>
using namespace std;
int main(){
    int k=65;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<char(k+j);
        }
        k=65;
        cout<<endl;
    }
}