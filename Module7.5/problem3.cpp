#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    //New Node created
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    //tail ta connect korsi
    tail->next = newNode;

    //tail update korsi
    tail = newNode;
}



int sizeCount(Node* head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void printCount(Node* head){

    Node *tmp = head;

    int size = sizeCount(head);
    int middleSize =size/2;
    // cout<<size<<" "<<endl; 

   
    if(size %2 != 0){
        for(int i=0; i<middleSize; i++){
            tmp = tmp->next;
        }
        cout<< tmp -> val <<" ";
    }
    else if( size %2 == 0){
        for(int i=1; i<middleSize; i++){
            tmp = tmp->next;
        }
        cout<< tmp -> val <<" ";
        tmp = tmp->next;
        cout<< tmp -> val <<" ";
    }

}

void findMid(Node *head){
    int size = sizeCount(head);
    int mid = (size + 1) /2;
    Node *temp = head;
    for(int i=0 ;i<mid-1; i++){
        temp = temp->next;
    }
    if(size % 2 == 0 ){
        cout<<temp ->val<< " "<< temp->next->val<< endl;
    }
    if(size % 2 == 0 ){
        cout<<temp ->val<<endl;
    }
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    //  printCount(head);
    findMid(head);

    return 0;
}