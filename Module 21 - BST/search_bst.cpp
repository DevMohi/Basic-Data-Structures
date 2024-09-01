#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node * left;
        Node * right;

    Node(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void levelorder (Node *root){
    
    if(root == NULL){
        return;
    }

    queue <Node *> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *front = q.front();
        q.pop();

        // kaaj 
        cout<<front -> val<<" ";
        
        if(front -> left != NULL){
            q.push(front -> left);
        }

        if(front -> right != NULL){
            q.push(front -> right);
        }
    }
    
}

Node * inputTree(){
    int val;
    cin>> val;  

    Node *root; 

    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue < Node * > q;
    if(root){
        q.push (root);
    }

    while(!q.empty()){
        Node * front = q.front();
        q.pop();

        // kaaj 
        int l,r;
        cin>>l>>r;
        Node * left;
        Node *right;

        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        // connection 
        front -> left = left;
        front -> right = right; 

        if(front -> left != NULL){
            q.push(front -> left);
        }
        if(front -> right != NULL){
            q.push(front -> right);
        }
    }
    return root; 
}

bool search(Node * root , int x){
    if(root == NULL ) return false;
    if(root -> val == x ) return true;

    if(x < root -> val){
        bool l = search(root -> left, x);
        if(l == true) return true;
        else return false;
    }

    else {
        bool r = search(root -> right , x);
        return r; //shortcut
    }
}

int main(){
    Node * root = inputTree();
    if(search(root , 20)){
        cout<<"YES";
    } 
    else {
        cout<<"Not found";
    }
    return 0;

}