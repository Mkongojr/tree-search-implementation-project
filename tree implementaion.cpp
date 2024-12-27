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