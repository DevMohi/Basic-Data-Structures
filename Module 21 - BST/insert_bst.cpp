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

//Aikane reference shoho nicce because root update kora lagbe 
void insert(Node *&root , int x){
    //Base case 
    if(root == NULL){
        //ai line er jnno reference lagbe 
        //return kore dise because naile nicher kaaj execute hobe 
        root = new Node(x);
        return;
    }

    if(x < root -> val){
        if(root -> left == NULL){
            //Jodi khali thake tahole ekta notun node create kore felo 
            root -> left = new Node(x); 
        }
        else{
            //else call korbo 
            insert(root -> left , x);
        }
    }
    else if(x > root -> val){
        if(root -> right == NULL){
            root -> right = new Node(x);
        }
        else{
            insert(root -> right , x); 
        }
    }
}

int main(){
    Node * root = inputTree();
    // int x; 
    // cin>>x;
    insert(root,13);
    insert(root,32);
    levelorder(root);
    return 0;

}