#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //Example of logN
    // while(n>0){
    //     int digit = n%10;
    //     cout<<digit<<endl;
    //     n/=10;

    // }

    //Another example of O(logN)
    for(int i=1; i<=n; i= i*2){
        cout<<i<<endl;
    }
    return 0;
}