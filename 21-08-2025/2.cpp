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

void helper(Node* &root, int key){
    if(root==NULL){
        return;
    }
    if(key<root->data){
        helper(root->left, key);
    }
    else if(key>root->data){
        helper(root->right, key);
    }
    else{
        if(!root->left && !root->right){
            root = NULL;
        }
        else if(!root->left){
            root = root->right;
        }
        else if(!root->right){
            root = root->left;
        }
        else{
            Node* succ = root->right;
            while(succ->left){
                succ = succ->left;
            }
            root->val = succ->data;
            helper(root->right, succ->data);
        }
    }
}
Node* deleteNode(Node* root, int key) {
    helper(root, key);
    return root;
}

int main(){
    
}