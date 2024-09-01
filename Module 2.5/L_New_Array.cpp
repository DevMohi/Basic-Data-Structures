#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    vector<int> c;
    v.insert(v.begin(),v2.begin(),v2.end());
    c.insert(c.begin(),v.begin(),v.end());

    for(int x: c){
        cout<<x<<" ";
    }
    

    return 0;
}