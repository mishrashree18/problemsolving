// Flatten a BT into a linkedlist
// left of each node should point to NULL and the right should contain next node in preorder sequence

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
                                
void flatten(Node* root)    {
    if(root == NULL || root->left == NULL && right == NULL){
        return;
    }
    if(root->left != NULL){
        flatten(root->left);
        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}                    


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    flatten(root);
    
    return 0;
}
