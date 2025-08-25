#include<iostream>
#include<vector>
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

void helper(Node* root, vector<int> &mer){
    if(root==NULL){
        return;
    }
    helper(root->left, mer);
    mer.push_back(root->data);
    helper(root->right, mer);
}

vector<int> merge(Node *root1, Node *root2){
    vector<int> mer;
    helper(root1, mer);
    helper(root2, mer);
    sort(mer.begin(), mer.end());
    return mer;
}