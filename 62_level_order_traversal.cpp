#include <iostream>
#include <queue>
using namespace std;

class tree {
public:
    int data;
    tree* left;
    tree* right;

    tree(int val) : data(val), left(NULL), right(NULL) {}
};

tree* buildTree(tree* root) {
    cout << "Enter data: ";
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    root = new tree(val);

    cout << "Enter data for left node of " << val << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right node of " << val << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrder(tree* root) {
    if (root == NULL)
        return;

    queue<tree*> q;
    q.push(root);

    while (!q.empty()) {
        tree* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right); 
    }
}

int main() {
	
    tree* root = NULL;
    
    root = buildTree(root);
    
    cout << "\nLevel order traversal: ";
    levelOrder(root);
    
    return 0;
}