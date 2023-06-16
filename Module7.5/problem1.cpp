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




void printCount(Node* head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<< tmp -> val << " ";
        tmp = tmp->next;
    }
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

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val2;
    while(true){
        cin>>val2;
        if(val2==-1){
            break;
        }
        insert_tail(head1, tail1, val2);
    }

    int size = sizeCount(head);
    int size2 = sizeCount(head1); 
    cout<<size<<" "<<size2<<endl;

    if(size == size2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    
    return 0;
}