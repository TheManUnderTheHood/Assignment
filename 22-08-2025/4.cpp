#include<iostream>
#include<unordered_set>
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

void helper(Node* root, unordered_set<int> &map){
    if(root == NULL){
        return;
    }
    helper(root->left, map);
    map.insert(root->data);
    helper(root->right, map);
}
void helper1(Node* root, unordered_set<int> &map, vector<int> &ans){
    if(root == NULL){
        return;
    }
    helper1(root->left, map, ans);
    if(map.find(root->data) != map.end()){
        ans.push_back(root->data);
    }
    helper1(root->right, map, ans);
}
vector<int> findCommon(Node *r1, Node *r2) {
    // Your code here
    unordered_set<int> map;
    vector<int> ans;
    helper(r1, map);
    helper1(r2, map, ans);
    return ans;
}

int main(){

}