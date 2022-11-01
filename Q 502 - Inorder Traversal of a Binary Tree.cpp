#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
Node *insertLevelOrder(int arr[],
                       int i, int n)
{
    Node *root = nullptr;
    if (i < n)
    {
        if (arr[i] != 0)
        {
            root = newNode(arr[i]);
            root->left = insertLevelOrder(arr, 2 * i + 1, n);
            root->right = insertLevelOrder(arr, 2 * i + 2, n);
        }
    }
    return root;
}
void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int a = 0; a < n; a++)
        cin >> arr[a];
    Node *root = insertLevelOrder(arr, 0, n);
    inOrder(root);
}
