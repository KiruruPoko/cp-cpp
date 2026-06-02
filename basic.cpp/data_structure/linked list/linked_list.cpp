#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data; //data
    Node *prev;
    Node *next; //address of node

    Node (int data){
        this -> data = data; //data
        this -> prev = nullptr;
        this -> next = nullptr; //link
    }
};

void printList(Node *n){
    while (n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
}
void printbackList(Node *n){
    while (n != nullptr){
        cout << n->data << " ";
        n = n->prev;
    }
}

int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head -> next = second;
    second -> prev = head;
    second -> next = third;
    third -> prev = second;

    printList(head);
    printbackList(third);
    return 0;
}