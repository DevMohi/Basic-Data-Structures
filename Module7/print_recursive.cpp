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

//Complexity = 0(N)
//One way 
void print_recursion(Node *head)
{
    // base case
    Node *temp  = head;
    if (temp == NULL)
        return;
    print_recursion(temp->next);
    cout << temp->val << " ";
}

//Single linked list normally reversely chola jaina
void print_reverse(Node *n)
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursion(head);
    cout << endl;
    print_reverse(head);
    return 0;
}