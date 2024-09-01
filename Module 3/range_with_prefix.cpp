//Brute force method 
// AI code e time complexity ase 

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin>>n>>q;
    long long int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    long long int pre[n];
    pre[0] = a[0];
    for(int i=1;i<n; i++){
        pre[i] = a[i] + pre[i -1];
    }
    
    // TILL 0 NEWA PORJONTO CHOLBE 
    while(q--){
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum = 0;
        if(l == 0){
            sum = pre[r]; 
        }
        else{
            sum = pre[r] - pre[l-1];
        }

        cout<<sum<<endl;
    }

    return 0;
}