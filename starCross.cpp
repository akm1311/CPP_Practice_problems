#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || j==n-i+1) cout<<"*";
            else cout<<" ";
        }
    cout<<endl;
    }
}
// Enter an Odd Value of n : 5
// *   *
//  * *
//   *
//  * *
// *   *