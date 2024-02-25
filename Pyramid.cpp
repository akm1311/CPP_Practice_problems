#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Odd Value of n : ";
    cin>>n;
    int k=n/2;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)<=n) cout<<" ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"*";
        }
    cout<<endl;
}
}
// Enter an Odd Value of n : 7
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************