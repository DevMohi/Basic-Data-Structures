#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0,j=v.size()-1; i<j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    for(int x: v){
        cout<<x<<" ";
    }
    return 0;
}