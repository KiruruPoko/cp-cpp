#include <bits/stdc++.h>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left; 
    Node *right;
};

void DFS(Node *root){
    if (root == nullptr){
        return; //handle empty tree case
    }
    stack<Node*>s;
    s.push(root);

    while(!s.empty()){
        Node *currentNode = s.top();
        s.pop();

        cout << currentNode->data << " "; //process current node
    // Push children in reverse order (right first, then left)
    // This maintains the equivalent order of a recursive DFS
        if (currentNode->right != nullptr) {
            s.push(currentNode->right);
        }
        if (currentNode->left != nullptr) {
            s.push(currentNode->left);
        }
    }
}

int main(){
    Node *root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};

    DFS(root);
    cout << endl;

    return 0;
}