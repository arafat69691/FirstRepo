#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// for insert
void insert(Node *&head, Node *&tail, int v)
{
    Node *newN = new Node(v);
    if (head == NULL)
    {
        head = newN;
        tail = newN;
        return;
    }
    tail->next = newN;
    tail = newN;
}
// for print
void print(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (min > temp->val)
            min = temp->val;

        if (max < temp->val)
            max = temp->val;

        temp = temp->next;
    }

    int deffer = max - min;

    cout << deffer;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    //qu
    {
        cin >> val;
        if (val == -1)
            break;
        else
            insert(head, tail, val);
    }
    // print
    print(head);
    return 0;
}