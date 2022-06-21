// Make the middle element the root
// Recursively form the subtrees
// start to mid-1 is left subtree
// mid + 1 to end is right subtree


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
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node* sortedArrayToBST(int arr[], int start, int end){
    if(start > end){
        return NULL;
    }
    int mid = (start + end)/2;
    Node* root = new Node(arr[mid]);

    root->left = sortedArrayToBST(arr, start, mid-1);
    root->left = sortedArrayToBST(arr, mid+1, end);
}






int main(){
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    int arr[] = {10,20,30,40,50};
    Node* root = sortedArrayToBST(arr,0,4);
    return 0;