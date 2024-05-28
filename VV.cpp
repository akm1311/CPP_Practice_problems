#include<iostream>
using namespace std;
int main(){
    int n=6,nsp=n+2;
    // cout<<"Enter an Odd Value of n : ";
    // cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==j) cout<<"*";
            else if(j==2*n-1-i+1) cout<<"*";
            else cout<<" ";
            
        }
        cout<<endl;
    }
}