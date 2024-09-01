#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }

    int n2;
    cin>>n2;

    for(int i=0;i<n2;i++){
        int x2;
        cin>>x2;
        q.push(x2);
    }

    bool flag = false;

    while(!q.empty()){
        if(st.top() != q.front()){
            flag = true;
            break; 
        }
        st.pop();
        q.pop();
    }

    if(flag == true){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl; 
    }

    return 0;
}