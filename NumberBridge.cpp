#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int nsp=1;
    int m=n-1;
    int f=1;
    for(int x=1;x<=2*n-1;x++) cout<<x;
    cout<<endl;
    for(int j=1;j<=m;j++){
        for(int i=j;i<=m;i++){
            cout<<f;
            f++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            f++;
        }
        for(int i=j;i<=m;i++){
            cout<<f;
            f++;
        }
        nsp+=2;
        f=1;
        cout<<endl;
    }
}