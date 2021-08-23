#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Node {
    int data;
    Node *left, *right, *right_sibling;
    int level;
};

struct Node *right_sibling_node(struct Node *root)
{
    struct Node *new_root = root->right_sibling;

    while (new_root != NULL)
    {
        if (new_root->left != NULL)
            return new_root->left;
        if (new_root->right != NULL)
            return new_root->right;
        new_root = new_root->right_sibling;
    }

    return NULL;
}



void insert(Node** root, int data) {
    if (*root == NULL) {
        *root = new Node;
        (*root)->data = data;
        (*root)->left = NULL;
        (*root)->right = NULL;
        (*root)->right_sibling = NULL;
        (*root)->level = 0;
        return;
    }
    if ((*root)->data > data)
        insert(&((*root)->left), data);
    if ((*root)->data < data)
        insert(&((*root)->right), data);
}

void mark_levels(Node* root) {
    if (!root)
        return;
    if (root->left) {
        root->left->level = root->level + 1;
        mark_levels(root->left);
    }
    if (root->right) {
        root->right->level = root->level + 1;
        mark_levels(root->right);
    }
}

void clear(Node* root) {
    if (!root)
        return;
    clear(root->left);
    clear(root->right);
    delete root;
}

void build_siblings(struct Node* root)
{

    if (!root)
        return;

    root->right_sibling = NULL;


    while (root != NULL)
    {
        struct Node *new_root = root;


        while (new_root != NULL)
        {
            if (new_root->left)
            {
                if (new_root->right)
                    new_root->left->right_sibling = new_root->right;
                else
                    new_root->left->right_sibling = right_sibling_node(new_root);
            }

            if (new_root->right)
                new_root->right->right_sibling = right_sibling_node(new_root);

            new_root = new_root->right_sibling;
        }

        if (root->left)
            root = root->left;
        else if (root->right)
            root = root->right;
        else
            root = right_sibling_node(root);
    }
}

void print_siblings(Node* root) {
    if (!root)
        return;
    cout << root->data << " ";
    print_siblings(root->right_sibling);
}

bool print_level(Node* root, int level) {
    if (!root)
        return false;
    if (root->level == level) {
        print_siblings(root);
        cout << endl;
        return true;
    }
    if (print_level(root->left, level))
        return true;
    return print_level(root->right, level);
}

int main() {
    int n;
    cin >> n;
    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        insert(&root, tmp);
    }
    mark_levels(root);
    build_siblings(root);
    int level;
    cin >> level;
    print_level(root, level);;
    clear(root);
    return 0;
}