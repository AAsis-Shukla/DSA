#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;
Node* buildTree(vector<int> &nodes){
    idx ++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
// return number of nodes in the tree
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}

// return total sum of node value
int sumNode(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumNode(root->left);
    int rightSum = sumNode(root->right);
    return leftSum + rightSum + root->data;
}
// return height of the Binary tree
int Height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHT = Height(root->left);
    int rightHT = Height(root->right);
    return max(leftHT,rightHT) + 1;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,6,7,-1,-1,-1,3,-1,-1};
    Node* root = buildTree(nodes);
    // cout<<"total Node in the tree : "<<count(root)<<endl;
    // cout<<"total sum of node value : "<<sumNode(root)<<endl;
    cout<<"Height of the tree : "<<Height(root)<<endl;
    return 0;
}