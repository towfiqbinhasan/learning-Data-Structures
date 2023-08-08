#include <iostream>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        // Insertion logic (same as previous example)
    }

    // Inorder Traversal
    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->value << " ";
            inorderTraversal(node->right);
        }
    }

    void printInorder() {
        inorderTraversal(root);
        cout << std::endl;
    }

    // Preorder Traversal
    void preorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            cout << node->value << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    void printPreorder() {
        preorderTraversal(root);
        cout << std::endl;
    }

    // Postorder Traversal
    void postorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->value << " ";
        }
    }

    void printPostorder() {
        postorderTraversal(root);
        cout << std::endl;
    }
};

int main() {
    BinaryTree tree;


    cout << "Inorder traversal: ";
    tree.printInorder();

    cout << "Preorder traversal: ";
    tree.printPreorder();

    cout << "Postorder traversal: ";
    tree.printPostorder();

    return 0;
}
