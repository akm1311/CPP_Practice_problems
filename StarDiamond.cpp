#include<iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<n) nsp--;
        else nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<n) nst+=2;
        else nst-=2;
        cout<<endl;
    }
}