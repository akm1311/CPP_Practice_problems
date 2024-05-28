#include<iostream>
using namespace std;
int main(){
    int n=4,nsp=n+2;
    // cout<<"Enter an Odd Value of n : ";
    // cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        if(i!=n) cout<<"*";
        nsp-=2;
        cout<<endl;
    }
}