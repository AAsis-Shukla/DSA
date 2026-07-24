// Build BST with an array
#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node* insert(Node* root, int value){
    if(root == NULL){
        Node* newNode = new Node(value);
        return newNode;
    }
    if(root->data < value){
        insert
    }
}
Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i=0; i<n;i++){
        root = insert(root,arr[i]);
    }
}
int main(){
    int arr[] = {5,1,3,4,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    buildBST(arr,n);
    return 0;
}