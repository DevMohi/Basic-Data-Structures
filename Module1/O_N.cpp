#include<bits/stdc++.h>
using namespace std;

//All the steps except for loop are not considered
//Time Complexity for this O(n) -> linear complexity
int main(){
    int n; //1
    cin>>n; //1
    int ar[n]; //1 
    for(int i=0; i<n; i++){ //O(n)
        cin>>ar[i];
    }
    int s = 0;
    for(int i=0; i<n; i++){ //O(n)
        s+=ar[i];
    }
    cout<<s<<endl;
    return 0;
}
