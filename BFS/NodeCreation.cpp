#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    };
};

void BFS(struct Node *root, int type)
{
    if (root != NULL)
    {
        if (type == 0)
        {
            cout << root->data<< " ";
            BFS(root->left, type);
            BFS(root->right, type);
        }
        if (type == 1)
        {
            BFS(root->left, type);
            cout << root->data << " ";
            BFS(root->right, type);
        }
        if (type == 2)
        {
            BFS(root->left, type);
            BFS(root->right, type);
            cout << root->data << " ";
            
        }
    }
}

int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    BFS(root, 0);
    cout<<endl;
    BFS(root,1);
    cout<<endl;
    BFS(root,2);
    return 0;
}
