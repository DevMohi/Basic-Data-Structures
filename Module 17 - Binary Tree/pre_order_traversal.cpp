//Order , Depth - Pre - order traversal 

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

void preorder(Node * root){
    //Base case
    if(root == NULL){
        return; 
    }

    //Age root er value print koro 
    cout<<root->val<<" ";

    //Left subtree print koro 
    preorder(root->left);

    //Trpor right order print koro 
    preorder(root->right);
}

int main(){
    Node * root = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    Node * d = new Node (50);
    Node * e = new Node (60);
    Node * f = new Node (70);
    Node * g = new Node (80);
    Node * h = new Node (90);
    Node * i = new Node (100);

    //connection 
    root -> left = a;
    root -> right = b;

    //Left tree 
    a->left = c;
    a->right = h;

    c->right = e;
    h->right = i;

    //Right tree 
    b->right =d;
    
    d->left = f;
    d->right = g; 

    preorder(root);

    return 0;
}