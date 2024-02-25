#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int k=n/2;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==k+1 || i==k+1) cout<<"*";
            else cout<<" ";
    }
    cout<<endl;
}
}