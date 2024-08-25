//Counting number of nodes in binary tree. 

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
//Recusrion can be easily used to count the values. 
int countNode(Node * root){
    if(root == NULL){
        return 0;
    }

    int l = countNode(root ->left);
    int r = countNode(root -> right);
    return l+r+1;
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
    int count = countNode(root);
    cout<<count<<endl;
    return 0;
}