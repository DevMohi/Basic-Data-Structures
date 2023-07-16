#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class minStack {
public:
    minStack() {
        
    }

    Node* head = NULL;
    Node* tail = NULL;

    int size = 0;
    stack<int> track; 


    void push(int num) {
        size++;
        Node* newNode = new Node(num);

        if (track.empty() || num <= track.top()) {
            track.push(num);
        }

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        } 
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        
        

    }

    int pop() {
        if (size == 0) {
            return -1;
        }

        size--;
        Node* deleteNode = tail;
        int deletedValue = deleteNode->val;
        tail = tail->prev;
        if (tail == NULL) {
            head = NULL;
        } else {
            tail->next = NULL;
        }
        delete deleteNode;

        if (deletedValue == track.top()) {
            track.pop();
        }

        return deletedValue;
    }

    int top() {
        if (size == 0) {
            return -1;
        }
        return tail->val;
    }

    int getMin() {
        if (size == 0) {
            return -1;
        }
        
        return track.top();
    }
};