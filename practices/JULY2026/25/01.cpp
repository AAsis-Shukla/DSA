// Build A Binary Search Tree with an array
// verify that : inorder traversal of BST gives a sorted array
// Search a key (element) from a BST

#include<iostream>
using namespace std;
class Node {
    public:
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
        root = new Node(value);
        return root;
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }else{
        root->right = insert(root->right, value); 
    }
    return root;
}
Node* buildBST(int* arr, int n){   
    Node* root = NULL;
    for(int i=0; i<n; i++){
        root = insert(root,arr[i]);
    }
    return root;
}
bool searchBST(Node* root,int key){    // O(height)
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }else if(key < root->data){
        return searchBST(root->left, key);
    }else{
        return searchBST(root->right,key);
    }
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// function which print all Node's value of BST in a given range
void printRange(Node* root, int start, int end){
    if(root == NULL){
        return;
    }
    if(root->data >= start && root->data <= end){
        cout<<root->data<<" ";
        printRange(root->left, start,end);
        printRange(root->right, start,end);
    }else if(root->data <start){
        printRange(root->right,start,end);
    }else{
        printRange(root->left,start,end);
    }
}
int main(){
    int arr[] = {8,5,3,1,4,6,10,11,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = buildBST(arr,n);
    printRange(root,5,12);
    cout<<endl;
    return 0;
}