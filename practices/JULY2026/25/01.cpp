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
int main(){
    int arr[] = {5,1,3,4,2,7};
    Node*root = buildBST(arr,6);
    cout<<searchBST(root,10)<<endl;
    return 0;
}