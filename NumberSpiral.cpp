#include<iostream>
using namespace std;
int main(){
    int n=4;
    // cout<<"Enter an Odd Value of n : ";
    // cin>>n;
    int f=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=2*n-1;j>=1;j--){
            if(j==1 || j==2*n-1 || i==1 || i==2*n-1)cout<<n;
            else{
                if(j==2 || j==2*n-1 || i==2 || i==2*n-1)cout<<n-1;
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}