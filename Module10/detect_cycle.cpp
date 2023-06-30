//Cycle detect
//Hare and Tortoise Algorithm 
//Fast and Slow Algorith other name for this

//Slow -> 1 pointer
//Fast -> 2 pointer


//Done with two pointer

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

//Complexity - O(N)

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;
    return 0;
}