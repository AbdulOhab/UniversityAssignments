#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *left_child;
    node *right_child;
};

node* newNode(int n)
{
    node *new_node = new node;
    new_node->data = n;
    new_node->left_child = NULL;
    new_node->right_child = NULL;
    return new_node;
}

void preorder_traversal(node *n)
{
    if(n == NULL)
        return;
    cout<<n->data<<" ";
    preorder_traversal(n->left_child);
    preorder_traversal(n->right_child);
}

void postorder_traversal(node *n)
{
    if(n == NULL)
        return;
    postorder_traversal(n->left_child);
    postorder_traversal(n->right_child);
    cout<<n->data<<" ";
}

void inorder_traversal(node *n)
{
    if(n == NULL)
        return;
    inorder_traversal(n->left_child);
    cout<<n->data<<" ";
    inorder_traversal(n->right_child);
}

int main()
{
    cout<<"Hello bello"<<endl;
    node *root = newNode(1);
    root->left_child = newNode(2);
    root->right_child = newNode(3);
    root->left_child->left_child = newNode(4);
    root->left_child->right_child = newNode(5);
    root->right_child->left_child = newNode(6);
    root->right_child->right_child = newNode(7);

    cout<<"Preorder traversal: ";
    preorder_traversal(root);
    cout<<endl;
    cout<<"Postorder traversal: ";
    postorder_traversal(root);
    cout<<endl;
    cout<<"Inorder traversal: ";
    inorder_traversal(root);

}
