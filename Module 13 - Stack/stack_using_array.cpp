#include<bits/stdc++.h>
using namespace std;

//This for array, since stack is a concept. 
class myStack{
    public: 
        vector<int> v;
        void push(int val){
            v.push_back(val);
       }
       void pop(){
            v.pop_back();
       }
       int top(){
            return v.back();
       }
       int size(){
            return v.size();
       }
       bool empty(){
            if(v.size() == 0) return true;
            else return false;
       }
};

int main(){
    myStack st; //stack ektai thakbe tai dynamic banano lagbena
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    //stack index die access kora jaina
    while(st.empty() == false){
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}