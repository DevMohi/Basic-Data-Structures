#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1; i<=n; i++){ //0(N*2)
    //     for(int j=1; j<=n; j++){
    //         cout<<"Hello"<<endl;
    //     }
    // }
    for(int i=0; i<=n-1; i++){ ///0(N*2)
        for(int j=i+1; j<=n; j++){
            cout<<"Hello"<<endl;
        }
    }
    return 0;
}