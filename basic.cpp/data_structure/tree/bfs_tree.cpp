#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left; 
    Node *right;
};

void BFS(Node *root){
    if (root == nullptr){
        return; // handle empty tree case
    }
    queue<Node*>q;
    q.push(root);

    while (!q.empty()){
        Node *currentNode = q.front();
        q.pop();
        cout << currentNode->data << " "; //process the current Node
    //Enqueue children (if they exist)
        if (currentNode->left != nullptr){
            q.push(currentNode->left);
        }
        if (currentNode->right != nullptr){
            q.push(currentNode->right);
        } 
    }   
}

int main(){
    Node *root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};

    BFS(root);
    cout << endl;

    return 0;
}

