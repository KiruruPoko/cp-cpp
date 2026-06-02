#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left; // Binary tree 
    Node* right;
};

Node *newNode (int data) { //create new node in tree
    Node *node = new Node();
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

void insert(Node *&root, int data){ //insert a node in tree
    if (root == nullptr) {
        root = newNode(data);
        return;
    }
    if (data < root->data){ 
        insert(root->left, data); //child of left node
    } else {
        insert(root->right, data); // child of right node
    }
}