#include<bits/stdc++.h>
using namespace std;


class Node{
    public: 
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this-> val = val;
        this->next = NULL;
        this->prev = NULL;

    }
};

class myQueue{
    public:
        Node *head =NULL;
        Node *tail = NULL;
        int sz = 0;

    void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = tail ->next;

    }

    void pop(){
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }
    int front(){
        return head->val; 
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(sz == 0) return true;
        else return false;
    }
};



class myStack{
    public: 
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = tail->next;
        }

        //Stack hocce last er value pop kore
        void pop(){
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }
            else{
                tail->next = NULL;
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
            if(sz == 0) return true;
            else return false;
        }
};


int main(){
    myStack st;
    myQueue b;
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