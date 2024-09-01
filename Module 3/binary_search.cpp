//Brute force method 
// AI code e time complexity ase 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // TILL 0 NEWA PORJONTO CHOLBE 
    while(q--){
        int x;
        cin>>x;
        bool flag = true;
   
        for(int i=0; i<x; i++){
            if(a[i] == x){
                flag = true;
                break;
            }
        }
        if(flag == true) cout<<"Found"<<endl;
        else cout<<"Not found"<<endl; 
    }

    return 0;
}