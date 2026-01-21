// intbst.cpp
// Implements class IntBST
// YOUR NAME(S), DATE

#include "intbst.h"

#include <iostream>
using std::cout;

// constructor sets up empty tree
IntBST::IntBST() { 


}

// destructor deletes all nodes
IntBST::~IntBST() {
    root = nullptr;

}

// recursive helper for destructor
void IntBST::clear(Node *n) {
    if(root == nullptr)return;
    clear(root->left);
    clear(root->right);
    delete root;
}

// insert value in tree; return false if duplicate
bool IntBST::insert(int value) {
    if (root == nullptr) {
        root = new Node(value);
        return true;
    }
    return insert(value, root);
}

// recursive helper for insert (assumes n is never 0)
bool IntBST::insert(int value, Node *n) {
    if (value == n->info) {
        return false; 
    }
    else if (value < n->info) {
        if (n->left == nullptr) {
            n->left = new Node(value);
            n->left->parent = n;  
            return true;
        }
        return insert(value, n->left);
    }
    else { 
        if (n->right == nullptr) {
            n->right = new Node(value);
            n->right->parent = n;
            return true;
        }
        return insert(value, n->right);
    }
}


// print tree data pre-order
void IntBST::printPreOrder() const {
    printPreOrder(root);
    cout << "IMPLEMENT printPreOrder public method";; // IMPLEMENT HERE
}

// recursive helper for printPreOrder()
void IntBST::printPreOrder(Node *n) const {

    if (n == nullptr) return;

    cout << n->info << " ";
    printPreOrder(n->left);
    printPreOrder(n->right);
    cout << "IMPLEMENT printPreOrder private helper method"; // IMPLEMENT HERE
}

// print tree data in-order, with helper
void IntBST::printInOrder() const {
    printInOrder(root);
    cout << "IMPLEMENT printInOrder public method"; // IMPLEMENT HERE
}
void IntBST::printInOrder(Node *n) const {

   if (n == nullptr) return;
    printInOrder(n->left);
    cout << n->info << " ";
    printInOrder(n->right);

    cout << "IMPLEMENT IMPLEMENT printInOrder private helper method"; // IMPLEMENT HERE
}

// prints tree data post-order, with helper
void IntBST::printPostOrder() const {
    printPostOrder(root);
    cout << "IMPLEMENT printPostOrder public method"; // IMPLEMENT HERE
}

void IntBST::printPostOrder(Node *n) const {


    if (n == nullptr) return;
    printPostOrder(n->left);
    printPostOrder(n->right);
    cout << n->info << " ";
    cout << "IMPLEMENT printPostOrder private helper method";// IMPLEMENT HERE
}

// return sum of values in tree
int IntBST::sum() const {
     return sum(root);
}

// recursive helper for sum
int IntBST::sum(Node *n) const {
    if (n == nullptr) return 0;

    return n->info + sum(n->left) + sum(n->right);// REPLACE THIS NON-SOLUTION
}

// return count of values
int IntBST::count() const {
    return count(root); // REPLACE THIS NON-SOLUTION
}

// recursive helper for count
int IntBST::count(Node *n) const {
    if(n == nullptr)return 0;

    return 1+count(n->left)+count(n->right);
}

// IMPLEMENT THIS FIRST: returns the node for a given value or NULL if none exists
// Parameters:
// int value: the value to be found
// Node* n: the node to start with (for a recursive call)
// Whenever you call this method from somewhere else, pass it
// the root node as "n"
IntBST::Node* IntBST::getNodeFor(int value, Node* n) const{
    return NULL; // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the tree; false if not
bool IntBST::contains(int value) const {
    return false; // REPLACE THIS NON-SOLUTION
}

// returns the Node containing the predecessor of the given value
IntBST::Node* IntBST::getPredecessorNode(int value) const{
    return NULL; // REPLACE THIS NON-SOLUTION
}

// returns the predecessor value of the given value or 0 if there is none
int IntBST::getPredecessor(int value) const{
    return -1; // REPLACE THIS NON-SOLUTION
}

// returns the Node containing the successor of the given value
IntBST::Node* IntBST::getSuccessorNode(int value) const{
    return NULL; // REPLACE THIS NON-SOLUTION
}

// returns the successor value of the given value or 0 if there is none
int IntBST::getSuccessor(int value) const{
    return -1; // REPLACE THIS NON-SOLUTION
}

// deletes the Node containing the given value from the tree
// returns true if the node exist and was deleted or false if the node does not exist
bool IntBST::remove(int value){
    return false; // REPLACE THIS NON-SOLUTION
}
