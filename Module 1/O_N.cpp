// O(n) complexity 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int s = 0; 
    for(int i=0; i<n; i++){
        s+=a[i];
    }
    cout<<s<<endl; 



    // O(n+n) = O(2n) ==> O(n) complexity loop 
    return 0;
}