#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n][n];

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            // if(i/2 == j/2){
            //     cout<<("X");
            if(i == n/2 && j==n/2){
                printf("X");
                break;
            }
            if((i+j)== (n-1)){
                cout<<("/");
            }
            else if(i==j){
                cout<<("\\");
            }
            else{
                cout<<(" ");
            }
        }
        cout<<endl;
    }
    return 0;
}