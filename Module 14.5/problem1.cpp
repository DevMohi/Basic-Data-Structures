#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node *prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this->prev = NULL; 
    }
};

class myStack{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;

    void push(int val){
        sz++; 
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = tail ->next;
    }

    void pop (){
        sz--; 
        Node *deleteNode = tail; 
        tail = tail -> prev; 
        if(tail == NULL){
            head = NULL; 
        }
        else{
            tail -> next == NULL;
        }
        delete deleteNode; 
    }
    int top(){
        return tail->val;
    }

    int size(){
        return sz; 
    }

    bool empty (){
        if(sz == 0 ) return true;
        else return false; 
    }
};

int main(){
    myStack st;
    myStack st2; 
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }

    int n2;
    cin>>n2;

    for(int i=0; i<n2; i++){
        int x2;
        cin>>x2;
        st2.push(x2);
    }

    int flag = 1; 

    if(st.size() != st2.size()){
        flag = 0;
    }
    else if(st.size() == st2.size()){
        while(!st.empty()){
            if(st.top() != st2.top()){
                flag = 0;
                break; 
            }
            st.pop();
            st2.pop();
        }
    }
    
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else if(flag == 0){
        cout<<"NO"<<endl; 
    }


    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop(); 
    // }
    
    return 0;
}