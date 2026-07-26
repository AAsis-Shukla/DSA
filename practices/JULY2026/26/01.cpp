// print all path from root to leaf in a BST

#include<iostream>
#include<vector>
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
void printPath(vector<int> path){
    cout<<"Path : ";
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void pathHelper(Node* root, vector<int> &path){
    if(root == NULL){
        return;
    }
    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printPath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left, path); 
    pathHelper(root->right, path); 
    path.pop_back();
}

void rootToleafPath(Node* root){
    vector<int> path;
    pathHelper(root,path);
}
int main(){
    int arr[] = {8,5,3,1,4,6,10,11,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = buildBST(arr,n);
    rootToleafPath(root);
  
    return 0;
}