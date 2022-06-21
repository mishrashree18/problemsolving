// swapped two nodes
// Inorder of a BST is sorted
// 2 elements of the array is swapped


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    } else {
        // val > root->data
        root->right = insertBST(root->right, val);
    }
    return root;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calcPointers(Node* root, Node** first, Node** mid, Node** last, Node** prev ){
    if(root == NULL){
        return;
    }
    calcPointers(root->left, first, mid, last, prev);
    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }
        else {
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right, first, mid, last, prev);
}

void restoreBST(Node* root){
    Node* first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    calcPointers(root, &first, &mid, &last, &prev);

    if(first && last){
        swap(&(first->data), &(last->data));
    }
    else if(first && mid){
        swap(&(first->data), &(mid->data));
    }
}

int main(){
    Node *root = NULL;
    root = insertBST(root,5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    
    return 0;
}