#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;  

    stack<int> st;
    int n , m ;
    cin>>n >> m;

    for(int i =0; i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    
    for(int i=0 ; i<m ;i++){
        int b;
        cin>> b;
        q.push(b); 
    }

    int flag = 1; 
    if(st.size() != q.size()){
        flag = 0; 

    }
    else{
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                flag = 0;
                break;
            }
            else{
                st.pop();
                q.pop();
            }
        }
    }


    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}