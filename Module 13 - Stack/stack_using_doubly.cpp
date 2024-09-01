#include<bits/stdc++.h>
using namespace std;
//Stack using doubly linked list 
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
            //push hoile size increase 
            sz++; 
            Node * newNode = new Node(val);
            if(head == NULL){
                head= newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next; 
        }
        void pop(){
            // pop function call hoile size decrease 
            sz--; 
            Node * deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }
            else{
                tail ->next = NULL;
            }
            delete deleteNode; 
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz; 
        }
        bool empty(){
            if(sz == 0) return true; //O(1)
            else return false; 
        }
};

int main(){
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    while(st.empty() == false){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}