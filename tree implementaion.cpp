#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node (int value){
        data=value;
        left = right = nullptr;
    }
};

//add the BST class with the constructor and root initialization
class BST{
    public:
    Node* root;

    BST(){
        root = nullptr;
    }
};

//adding insert function declararion to the class
class BST{
    public:
    Node* root;

    BST(){
        root = nullptr;
    }
    void insert(int value);
};

//implementing the insertRec function to insert nodes
Node* insertRec(Node*node,int value){
    if (node==nullptr){
        return new Node(value);
    }
    if(value<node->data){
        node->left = insertRec(node->left, value);
    }else if(value>node->data){
        node->right = insertRec(node->right, value);
    }
    return node;
}