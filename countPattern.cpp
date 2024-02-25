#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)>=n+1){ cout<<k;
            k++;}
            else cout<<" ";
    }
    k=1;
    cout<<endl;
}
}