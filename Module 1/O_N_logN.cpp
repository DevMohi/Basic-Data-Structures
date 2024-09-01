// ekta loop n e jabe arekta logN nested hobe

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // Total complexity - O(NLog(N)) 

    for(int i=0;i<n;i++){ //O(N)
        int x = i;
        while(x>0){ //Olog(N)
            int digit = x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
        
    }
    return 0;
}