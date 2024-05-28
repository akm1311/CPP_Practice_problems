#include<iostream>
using namespace std;
int main(){
    int n=5;
    // cout<<"Enter an Odd Value of n : ";
    // cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<(char)(k+'A'-1);
        }
        for(int l=1;l<i;l++){
            cout<<(char)('A'+l);
        }
        cout<<endl;
    }
}

