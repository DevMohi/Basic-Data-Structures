#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};



void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtTail(Node *& head,Node *& tail, string val){
    //notun value toiri kortesi
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail-> next = newNode; 
    newNode -> prev = tail; 
    tail = newNode;  

}

void checker (Node *&head, Node *&tail , string s,Node *&tmp){
    if(s.find("visit") == 0){
        int index = s.find(" ") + 1;
        string address = s.substr(index);
        int flag = 0;
        tmp=head;
        while(tmp != NULL){
            if(tmp-> val == address){
                flag = 1;
                cout<<tmp->val<<endl;
                break;
            }
            if(tmp -> next == NULL){
                break;
            }
            else if (tmp -> val != address){
                tmp = tmp->next; 
            }
        }
        if(flag == 0){
            cout<<"Not Available"<<endl; 
            return;
        }
        
    }
    else if(s == "next"){
        if(tmp->next == NULL){
            cout<<"Not Available"<<endl;
            return;
        }
        else{
            tmp = tmp->next;
            cout<<tmp->val<<endl;
        }
    }
    else if(s == "prev"){
        if(tmp->prev == NULL){
            cout<<"Not Available"<<endl;
            return;
        }
        tmp = tmp->prev;
        cout<<tmp->val<<endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node *tmp = NULL;

    string val;
    while (true) {
        cin >> val;
        if (val == "end") {
            break;
        }
        insertAtTail(head, tail, val);
        cin.ignore();
    }

    int t;
    cin>>t;  
    cin.ignore();
    
    string s;
    for(int i=0;i<t;i++){
        getline(cin, s);
        checker(head,tail,s,tmp);
    }

    // string s = "visit phitron";
    // int index = s.find(" ") + 1;
    // cout<<s.substr(index)<<endl;

    // cout<<s.find("visit")<<endl;
    
    return 0;
}