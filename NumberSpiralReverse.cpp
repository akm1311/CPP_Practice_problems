#include<iostream>
using namespace std;
int main(){
    int n=4;
    // cout<<"Enter an Odd Value of n : ";
    // cin>>n;
    int f=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j = 1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            int f=min(a,b);
            cout<<n-f+1;

        }
        cout<<endl;
        
    }
}