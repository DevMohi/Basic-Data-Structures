#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
 
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
 
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<n; j++){
            // cout<<ar[j]<<" "<<ar[i] + 1<<endl;  
            if(ar[j] == ar[i] +1){
                count++;
                break;
            }
        }
    }
    cout<<count;
 
    return 0;
}
