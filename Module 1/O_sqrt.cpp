#include<bits/stdc++.h>
using namespace std;


// Aita 10 * 14 porjonto korte parba because sqrt of 10* 14 is 10*7 
int main(){
    int n;
    cin>>n;

    //O(sqrt(N))

    //Example 1
    for(int i=1; i<=sqrt(n) ; i++){
        if(n%i == 0){
            // cout<<i<<" "<<n/i<<endl;  
            cout<<i<<" "; 
            if(n/i != i){
                cout<<n/i<<endl;
            }
            
        }
    }

    //Example 2
    //same 
    for(int i=1; i*i <=n; i++){

    }
    return 0;
}