#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node * left;
        Node * right;

    Node(int val){
        this -> val = val;
        this -> left = left;
        this -> right = right;
    }
};

int main(){
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b  = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);


    root->left = a;
    root -> right = b;
    a-> left = c;
    a-> right = h; 
    c-> right = e;
    h->right = i;

    b->right = d; 
    d->left=f;
    d->right=g;

    //order to print non linear 
    //depth and level wise = two level 
    //depth three types- > pre order , post oder, in-order 

    //Pre order -> root, left, right prints in these order. 
     

    return 0;
}