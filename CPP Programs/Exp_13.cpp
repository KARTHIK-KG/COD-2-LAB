// C++ program to perform inorder tree traversal

#include <iostream>
using namespace std;

struct Node {
  int data;
  char ch;
  struct Node *left, *right;
  Node(int data, char c) {
    this->data = data;
    this->ch = c;
    left = right = NULL;
  }
};

// Inorder traversal
void inorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  if(node->ch != '\0')
  cout << node->data <<node->ch;
  else
  cout<<node->data;
  inorderTraversal(node->right);
}

int main() {
  struct Node* root = new Node(25, ',');
  root->left = new Node(15, ',');
  root->right = new Node(30, '\0');

  inorderTraversal(root);
}