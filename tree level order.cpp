///Name:Abdul Ohab
///ID:2019000000061
///Final Assignment
///Question Level-order traversal in a binary tree.

#include <bits/stdc++.h>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

void level_order_traversal(node *root)
{
    if (root == NULL)
        return;
    queue<node *> qu;
    node *cur;
    qu.push(root);
    qu.push(NULL);

    while (qu.size() > 1)
    {
        cur = qu.front();
        qu.pop();
        if (cur == NULL)
        {
            qu.push(NULL);
        }
        else
        {
            if(cur->left)
                qu.push(cur->left);
            if(cur->right)
                qu.push(cur->right);
            cout << cur->data << " ";
        }
    }
}

node* newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


int main()
{

    node *root = newNode(2);
    root->left = newNode(7);
    root->right = newNode(5);
    root->left->left = newNode(2);
    root->left->right = newNode(6);
    root->right->right = newNode(9);
    root->right->right->right = newNode(4);
    root->left->right->left = newNode(5);
    root->left->right->right = newNode(11);

    level_order_traversal(root);
    return 0;
}
