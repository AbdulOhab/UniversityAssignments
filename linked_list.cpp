#include <bits/stdc++.h>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

void levelOrder(node *root)
{
    if (root == NULL) return;
    queue<node *> q;
    node *curr;
    q.push(root);
    q.push(NULL);

    while (q.size() > 1)
    {
        curr = q.front();
        q.pop();
        if (curr == NULL)
        {
           q.push(NULL);
           //cout << "\n";
        }

        else {
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
            cout << curr->data << " ";
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

    levelOrder(root);
    return 0;
}
