#include <iostream>
using namespace std;

typedef struct bin_tree *address;
typedef struct bin_tree {
    int data;
    address right;
    address left;
} node;
address createNode(int val){
    address newNode = new node;
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void insert(address *tree, int val)
{

    if ((*tree) == NULL)
    {
       *tree = createNode(val);
    }
    else if (val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if (val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}

void print_preorder(address tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}


void print_inorder(address tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        cout << tree->data << "\n";
        print_inorder(tree->right);
    }
}
void print_postorder(address tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}
void deleteTree(address tree)
{
    if (tree)
    {
        // Rekursif menghapus subpohon kiri
        deleteTree(tree->left);
        // Rekursif menghapus subpohon kanan
        deleteTree(tree->right);
        // Menghapus node saat ini
        delete tree;
    }
}


int main()
{
    address root;
    root = NULL;
    insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);
    print_inorder(root);
    
    std::cout << std::endl;

    return 0;
}
