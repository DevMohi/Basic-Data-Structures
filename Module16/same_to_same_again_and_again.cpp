#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<int> st;
    queue<int> b;
    int n , m;
    cin>>n >> m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }

    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        b.push(x);
    }

    bool flag = true;
    // if(n != m){
    //     flag = false;
    // }

    if(n == m){
        while(!st.empty()){
        if(st.top() != b.front()){
            flag = false;
        }
        st.pop();
        b.pop();
        }
    }
    else{
        flag = false;
    }
    
    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }   
    return 0;
}