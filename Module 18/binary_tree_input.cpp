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
        if(front -> left != NULL){
            q.push(front->left);
        }
        if(front -> right != NULL){
            q.push(front-> right); 
        }
    }
}

Node * inputTree(){
    int val;
    cin>>val;

    Node * root;
    if(val == -1){
        //Mane tree form hoinai
        root =  NULL;
    }
    else{
        root = new Node(val);
    }

    queue <Node *> q;
    //root jodi thake push kore dao 
    if(root) {
        q.push(root); 
    }
    while(!q.empty()){
        //ber koro 
        Node * front  = q.front();
        q.pop();

        //jabotiyo kaaj koro 
        int l,r;
        cin>>l>>r;
        Node * left;
        Node * right; 
        if(l == -1 ) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL; 
        else right = new Node(r); 

        //Connection 
        front -> left = left;
        front -> right = right; 

        //Children gulo ke push koro 
        if(front -> right != NULL){
            q.push(front-> right); 
        }
        if(front -> left != NULL){
            q.push(front->left);
        }
    }
    return root; 
}

int main(){
    Node * root = inputTree();
    levelorder(root);
    return 0;
}