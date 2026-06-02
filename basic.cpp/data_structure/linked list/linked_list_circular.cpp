#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data; //data
    Node *next; //address of node

    Node (int data){
        this -> data = data; //data
        this -> next = nullptr; //link
    }
};

void printList(Node *head){
    Node *temp = head;
    if (head != nullptr){
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }   while(temp != head);         
    }
}


int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head -> next = second;
    second -> next = third;
    third -> next = head;

    printList(head);
    //printbackList(third);
    return 0;
}