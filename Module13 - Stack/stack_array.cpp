#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v;
        void push(int val){
            //shobar sesh e add korte chaile pushback
            v.push_back(val); 
        }
        void pop(){
            //last value ta shorabo ba remove korbo
            v.pop_back(); 
        }
        int top(){
            //top value ta return korbe
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
    //stack ektai tai dynamic toiri korte hobena
    myStack st;
    //pura v access korte parbana

    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // // st.pop(); 
    // if(st.empty() == false){
    //     cout<<st.top()<<endl;
    // }

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }

    //Stack e array moto index die access kora jaina

    //Aibhave print korte parba
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}