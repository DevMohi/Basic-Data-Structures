#include<bits/stdc++.h>
using namespace std;

//Binary Tree Implement

//Level order floor value from right to left

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

void levelorder(Node *root){
    if(root == NULL){
        cout<<"Tree nai"<<endl;
        return; 
    }
    //Node  * use hocce karone Node * er under e children ase. 
    queue <Node *> q;

    //aita die diso bcs jodi null hoi taile error khabe
    q.push(root);
    while(!q.empty()){
        // 1. Ber kore ana 
        Node * front = q.front();
        q.pop();

        //jabotio ja kaj ache
        cout<<front->val<<" ";

        //children gulo rakha 
        if(front -> right != NULL){
            q.push(front-> right); 
        }
        if(front -> left != NULL){
            q.push(front->left);
        }

    }
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

    levelorder(root);

    return 0;
}