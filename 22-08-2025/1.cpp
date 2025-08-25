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

void helper(Node *root, int l, int h, int &count){
    if(root==NULL){
        return;
    }    
    if(root->data >=l && root->data<=h){
        count++;
        helper(root->left, l ,h, count);
        helper(root->right, l ,h, count);
    }
    if(root->data<l){
        helper(root->right, l ,h, count);
    }
    else if(root->data>h){
        helper(root->left, l ,h, count);
    }
}

int getCount(Node *root, int l, int h) {
    int ans = 0;
    helper(root, l, h, ans);
    return ans;
}