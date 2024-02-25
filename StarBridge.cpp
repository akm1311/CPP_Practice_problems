#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int nsp=1;
    int m=n-1;
    for(int x=2*n-1;x>0;x--) cout<<"*";
    cout<<endl;
    for(int j=1;j<=m;j++){
        for(int i=m;i>=j;i--){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int i=m;i>=j;i--){
            cout<<"*";
        }
        nsp+=2;
        cout<<endl;
    }
}