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





void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linekd_list(head);
    // cout<<"value of max: "; 
    

    int max =INT_MIN;
    for(Node * i = head ; i != NULL; i = i->next){
        if(i->val > max){
            max = i->val;
        }
    }
    cout<<max<<" ";
    // print_linekd_list(head); 

    return 0;
}