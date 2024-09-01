#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> a;
    stack<int>copy; 
    
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        a.push(x);
    }

    //50 40 30 20 10 
    while(!a.empty()){
        // cout<<a.front()<<endl; 
        int element = a.front();
        a.pop();
        copy.push(element); 
    }

    //Print elements
    while(!copy.empty()){
        cout<<copy.top()<<" ";
        copy.pop();
    }
    return 0;
}
