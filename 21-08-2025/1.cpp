#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node*right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void helper(Node* root, int val){
    if(root==NULL){
        return;
    }
    if(root->data > val){
        if(root->left==NULL){
            Node *n = new Node(val);
            root->left=n;
            return;
        }
        helper(root->left, val);
    }
    else if(root->data < val){
        if(root->right==NULL){
            Node *n = new Node(val);
            root->right=n;
            return;
        }
        helper(root->right, val);
    }
}
Node* insertIntoBST(Node* root, int val) {
    if(root==NULL){
        return new Node(val);
    }
    helper(root, val);
    return root;
}

int main(){

}