#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector <int> x(n);
 
 
    for(int i=0; i<n;i++){
        cin>>x[i];
        if(x[i] == 0){
            x[i] = 0;
        }
        if(x[i] > 0){
            x[i] = 1;
        }
        else if(x[i] <0 ){
            x[i] = 2;
        }
    }
 
    for(int val:x){
        cout<<val<<" ";
    }
    return 0;
}