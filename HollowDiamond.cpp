#include<iostream>
using namespace std;
int main(){
    int n = 7; // Set the value of n
    int nsp = n / 2;
    int nstar = 1;
    // Print upper part of diamond
    for(int i = 1; i <= n; i++){
        // Print spaces
        for(int j = 1; j <= nsp; j++){
            cout<<" ";
        }
        // Print stars
        cout<<"*";
        // Print spaces between stars
        for(int k = 1; k < nstar; k++){
            cout<<" ";
        }
        // Print the second star if not the first or last row
        if(i != 1 && i != n){
            cout<<"*";
        }
        cout<<endl;
        // Update spaces and stars for next row
        if(i <= n / 2){
            nsp--;
            nstar += 2;
        }
        else{
            nsp++;
            nstar -= 2;
        }
    }
}
