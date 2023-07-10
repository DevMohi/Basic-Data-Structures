//Question 1 :  Take two doubly linked lists as input and check if they are the same or not.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node *prev;

    Node(int val){
        this-> val = val;
        this->next = NULL;
        this ->prev = NULL;
    }
};

//Check if size is same, arekta hocce value same naki jeikono ektar upor loop cholai. 

void insertAtTail(Node *&head, Node *&tail , int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode; 
    newNode -> prev = tail; 
    tail = newNode;
}


//Checking size

int getSize(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }

    return count;
}

//Checking value

int valueCheck(Node *head , Node *head1){

    int flag = 1;
    while(head != NULL){
        // cout<<head->val<<" ";
        // cout<<head1->val<<" ";

        if(head->val != head1->val){
            flag = 0;
        }
        head = head ->next;
        head1 = head1 ->next;

    }
    return flag;
}

void printList(Node *head){
    while(head != NULL){
        cout<<head -> val <<" ";
        head = head->next;  
    }
    cout<<endl;
}



int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insertAtTail(head,tail,val);
    }
    // printList(head);

    Node *head1 = NULL;
    Node *tail1 = NULL;


    int val1;
    while(true){
        cin>>val1;
        if(val1 == -1){
            break;
        }
        insertAtTail(head1,tail1,val1);
    }

    // printList(head1); 

    int size1 = getSize(head);
    int size2 = getSize(head1);
    if(size1 == size2){
        int checker = valueCheck(head,head1);
        if(checker == 0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    } 
    else{
        cout<<"NO"<<endl;
    }



    //Matching values

    

    
    return 0;
}