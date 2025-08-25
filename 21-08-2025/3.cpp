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

void helper(Node* root, int &c, int k, int &ans){
    if(root==NULL){
        return;
    }
    helper(root->left, c,k,ans);
    c++;
    if(c==k){
        ans=root->data;
    }
    helper(root->right,c, k, ans);
}

int kthSmallest(Node* root, int k) {
    int ans = 0;
    int c = 0;
    helper(root, c, k, ans);
    return ans;
}