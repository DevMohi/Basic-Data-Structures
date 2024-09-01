#include<bits/stdc++.h>
using namespace std;

// LogN example jodi value ta /2 or *2 bare tahole 0LognN 
// 10*18 -> 60 steps e kore dibe
// Better than o(n) complexity

int main(){
    int n;
    cin>>n;

    // example 1 of 0log(N) 
    while(n>0){  //Olog(N)
        int digit = n%10;
        cout<<digit<<endl;
        n/=10;
    }
    // example 2 of 0log(N) 
    for(int i=1; i<=n ;i=i*2){
        cout<<i<<endl;
    }
    return 0;
}