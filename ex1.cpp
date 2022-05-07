#include <iostream>

class Node {
public:
    Node(int data) : data_(data), left(nullptr), right(nullptr) {}
    Node* left;
    Node* right;
    int getData() const { return data_; }
private:
    int data_;
};
 
void inorder(Node* node) {
    if (node == nullptr) return;
        
    inorder(node->left);
    std::cout << node->getData() << " ";
    inorder(node->right);
}
//Test code:
int main() {
    Node* root = new Node(2);          /*     Test tree visualization:   */  
    root->left = new Node(1);          /*                2               */  
    root->right = new Node(4);         /*              /  \				*/  	
    root->right->left = new Node(3);   /*             1    4             */  
    root->right->right = new Node(5);  /*                 / \            */  
                                       /*                3   5           */                     
    inorder(root); //Output: 1 2 3 4 5
	
    return 0;
}