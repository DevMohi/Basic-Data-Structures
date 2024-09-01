#include<bits/stdc++.h>
//Ways of taking input  
using namespace std;

int main(){
    // //Type 1 
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x); 
    // }
    // for(int x:v){
    //     cout<<x<<" ";
    // }

    //Type 2 
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}