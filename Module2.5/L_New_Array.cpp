#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);

    for(int i=0; i<n; i++){
        cin>>v1[i];

    }
    for(int i=0; i<n; i++){
        cin>>v2[i];
    }

    vector<int> c;
    for(int num: v2){
        c.push_back(num);
    }
    for(int num: v1){
        c.push_back(num);
    }

    for(int x: c){
        cout<<x<<" ";
    }
    return 0;
}