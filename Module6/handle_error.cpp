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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<endl<<"Invalid position"<<endl<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}


void insert_at_head(Node* &head, int v){
    Node * newNode = new Node(v);
    newNode -> next = head; 
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}

void delete_from_position(Node *head , int pos){
    Node *tmp = head;
    for(int i = 1; i<=pos-1; i++){
        //aikane 20 tah ase
        tmp= tmp->next;
        if(tmp == NULL){
            cout<<endl<<"Invalid position"<<endl<<endl;
            return;
        }
        
    }
    if(tmp->next == NULL){
            cout<<endl<<"Invalid position"<<endl<<endl;
            return;
    }
    
    Node * deleteNode = tmp->next; // aikane 30 but aita arekta node e 
    //mane 40 e ase 

    //aikane tmp still 20 tah 
    tmp-> next = tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted position"<<pos<<endl<<endl;
}

void delete_head(Node *&head){
    //Jodi head na thake kemne access korba 
    if(head == NULL){
            cout<<endl<<"Head is not available"<<endl<<endl;
            return;
    }
    Node *deleteNode = head;
    head = head-> next; 
    delete deleteNode; 
    cout<<endl<<"Deleted Head"<<endl<<endl;
}



int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl; //done
        cout << "Option 2: Print Linked List" << endl; //done
        cout << "Option 3: Insert at any Position" << endl; //error handled
        cout << "Option 4: Insert at head" << endl;
        //done
        cout << "Option 5: Delete from position" << endl;
        //error handled
        cout << "Option 6: Delete head" << endl;
        //error handled
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if(pos == 0){
                insert_at_head(head,v);
            }
            else{
                insert_at_position(head, pos, v);
            }
        }
        else if(op ==4){
            int v;
            cout<<"Enter value : ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op == 5){
            int pos;
            cout<<"Enter position: ";
            cin>>pos; 
            if(pos == 0){
                delete_head(head);
            }
            else{
                delete_from_position(head,pos);
            }
        }
        else if (op == 6){
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}