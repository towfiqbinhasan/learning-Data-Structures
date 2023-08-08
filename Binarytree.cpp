#include <iostream>
#include<queue>
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
        if (root == nullptr) {
            root = new TreeNode(value);
            return;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();

            if (current->left == nullptr) {
                current->left = new TreeNode(value);
                break;
            } else {
                q.push(current->left);
            }

            if (current->right == nullptr) {
                current->right = new TreeNode(value);
                break;
            } else {
                q.push(current->right);
            }
        }
    }

    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->value << " ";
            inorderTraversal(node->right);
        }
    }

    void printInorder() {
        inorderTraversal(root);
        cout <<endl;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5);
    tree.insert(6);
    tree.insert(7);

    cout << "Inorder traversal of the binary tree: "<<endl;
    tree.printInorder();

    return 0;
}
