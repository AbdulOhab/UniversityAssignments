#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}


int count(Node* head, int search_for)
{
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    cout << "count of 1 is " << count(head, 1);
    return 0;
}
