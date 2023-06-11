#include<bits/stdc++.h>
using namespace std;

//4 4 5
// 4 4 
// 4 5
// 4 5

int main(){
    int n;
    cin>>n;
    int count = 0;
    vector<int> x(n);

    for(int i=0; i<n;i++){
        cin>>x[i];
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            cout<<x[i]+1<<x[j]<<endl;
            if(x[i] + 1 == x[j]){
                count++;
            }
        }
    }
    cout<<count;   

    return 0;
}


