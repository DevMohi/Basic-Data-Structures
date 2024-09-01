//Convert array to Bst
// Condition -> The array has to be sorted to convert it into bst 

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

Node * convert (int a[], int n, int l, int r){
    //base case 
    if(l>r ){
        return NULL; 
    }
    int mid = (l+r)/2 ; 
    Node * root = new Node (a[mid]);
    Node * leftRoot = convert(a,n,l,mid-1);
    Node * rightRoot = convert(a,n,mid+1,r);
    root -> left = leftRoot;
    root -> right = rightRoot; 
    return root; 
}   

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //array, array size, left and right (last index)
    Node * root = convert(a,n,0,n-1);
    levelorder(root);
    
    return 0;
}