
// Binary tree implementation
#include<iostream>
#include<vector>
using namespace std;
// ======== create Individual Node of tree ====================
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


// ========== Build a binary tree with the set of node ===========
static int idx = -1;
Node* buildBinaryTree(vector<int> nodes){
    idx ++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildBinaryTree(nodes);
    currNode->right = buildBinaryTree(nodes);

    return currNode;
}

// ==================== Traversing of Binary tree =================
// pre-order traversing
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    
    // root Node
    cout<<root->data<<" ";

    // left subtree
    preorder(root->left);

    // right subtree
    preorder(root->right);
}

// in-order traversing
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    // left subtree
    inorder(root->left);

    // root node
    cout<<root->data<<" ";

    // right subtree
    inorder(root->right);
}

// Post-order traversing 
void postorder(Node* root){
    if(root == NULL){
        return ;
    }
    // left subtree
    postorder(root->left);

    // Right subtree
    postorder(root->right);

    // root Node
    cout<<root->data<<" ";
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1}; // pre-order sequence
    Node* root = buildBinaryTree(nodes);
    // cout<<root->left->right->data<<endl;     
    // preorder(root);
    postorder(root);
    cout<<endl;
    return 0;
}