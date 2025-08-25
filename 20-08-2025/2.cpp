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

bool checkTree(Node* root) {
    return root->data == (root->left->data+root->right->data);
}

int main(){
    cout<<"hello";
}
