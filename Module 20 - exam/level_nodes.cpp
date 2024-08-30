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

void levelorder (Node *root , int val){
    
    if(root == NULL){
        return;
    }

    vector<int> p;

    //Pair 
    queue<pair<Node * , int> > q;

    if(root){
        q.push({root,0});
    }

    while(!q.empty()){
        pair<Node * ,int> parent = q.front();
        Node * front = parent.first;
        int level = parent.second; 


        q.pop();
        //kaaj 
        
        if(val == level){
            p.push_back(front ->val);    
        }

        if(front -> left != NULL){
            q.push({front -> left , level + 1});
        }

        if(front -> right != NULL){
            q.push({front -> right , level + 1});
        }
    }

    if(p.empty()){
        cout<<"Invalid"<<" ";
        return;
    }

    reverse(p.begin(), p.end());
    
    while(!p.empty()){
        cout<<p.back()<<" ";
        p.pop_back();
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

int main(){
    Node * root = inputTree();
    int val;
    cin>>val;
    levelorder(root,val);

    return 0;
}