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

    int suml = 0, sumr = 0; 
    bool perfectNode = true; 

    vector<int> v;
    queue <Node *> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *front = q.front();
        q.pop();

        // kaaj 
        if((front -> left == NULL && front -> right != NULL ) || (front -> left != NULL && front -> right == NULL)){
            perfectNode = false; 
        }
            
        if(front -> left != NULL){
            q.push(front -> left);
            suml++;
        }

        if(front -> right != NULL){
            q.push(front -> right);
            sumr++;
        }
    }
    
    // int totalSum = suml+ sumr + 1; 
    // cout<<totalSum;

    if(perfectNode){
        if(suml == sumr){
        cout<<"YES";
        }
    }  
    else{
        cout<<"NO";
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
    levelorder(root);

    return 0;
}