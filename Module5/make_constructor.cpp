#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;

    Node(int val){
        this-> val = val;
        this->next = NULL;

    }
};

int main(){
    Node a(10);
    Node b(20);

    a.next = &b;

    //2 wayts to get valuess
    cout<<a.next->val<<endl;
    // cout<<(*a.next).val<<endl; 



    return 0;
}