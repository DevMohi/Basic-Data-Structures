//Prefix sum -> Pre-Computation technique

// 10*10 cholate hobe - but 1.5 s ase 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    vector<int> pre(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    //prefix sum calculation

    //Approach 1
    // pre[0] = v[0];
    // for(int i=1; i<n; i++){
    //     pre[i] = v[i] + pre[i-1];
    // }

    //Approach 2
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        pre[i] = sum;
    }

    return 0;
}