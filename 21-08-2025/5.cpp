#include<iostream>
#include<unordered_set>
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

bool helper(TreeNode* root, int k, unordered_set<int> &set){
    if(root==NULL){
        return false;
    }
    if(set.count(k-root->val)){
        return true;
    }
    set.insert(root->val);
    return helper(root->left, k, set) || helper(root->right, k, set);     
}

bool findTarget(TreeNode* root, int k) {
    unordered_set<int> set;
    return helper(root, k, set);
}

int main(){

}