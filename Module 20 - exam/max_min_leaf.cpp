#include <bits/stdc++.h>
using namespace std;

class Node{
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


void levelorder(Node *root, int &mx , int &mn){
 
    if(root == NULL){
        return;
    }
    
    queue<Node * > q;

    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *front = q.front();
        q.pop();
        
        //Kaaj - jodi both null hoi tokon hobe ai kaaj ta
        if(front -> left == NULL && front -> right == NULL){
            mx = max(mx,front->val);
            mn = min(mn , front -> val);
            // cout<<front -> val << " "; 
        }
   
        if(front -> left != NULL){
            q.push(front -> left);
        }
        if(front -> right != NULL){
            q.push(front -> right);
        }
    }
}


Node *inputTree(){
    int val;
    cin>>val;
    
    Node *root;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue <Node *> q;

    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node *front = q.front();
        q.pop();
        
        // kaaj 
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        
        if(r == -1) right =NULL;
        else right = new Node(r);
        
        //connection 
        front -> left = left;
        front -> right  = right; 
        
        if(front -> left != NULL){
            q.push(front -> left);
        }
        if(front -> right != NULL){
            q.push(front -> right);
        }     
    }
    return root; 
    
}

int main()
{
    // Write your code here
    Node *root = inputTree();
    int max = INT_MIN; 
    int min = INT_MAX;
    levelorder(root, max, min);
    cout<<max<<" "<<min;

    return 0;
}
