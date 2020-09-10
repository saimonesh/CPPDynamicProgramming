#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
        
    };
};

void preOrder(struct Node* root)
{
    if(root !=NULL)
    {
        cout<<root->data<<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);
    preOrder(root);
    return 0;
}
