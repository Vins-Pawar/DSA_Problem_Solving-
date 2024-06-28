#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node * left;
    node * right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void inorder(node* root)
{
//cout<<"i a in inorder"<<endl;
if(root==NULL)
{
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* createBinaryTree(node *&root)
{
    int data;
    cout<<"Enter the Data "<<endl;;
    cin>>data;
    root=new node(data);
    //cout<<"hi"<<endl;
    if(data==-1)
        return NULL;

    cout<<"Enter the data for insertion in left of "<<data<<endl;
    root->left=createBinaryTree(root->left);

    cout<<"Enter the data for insertion in right of "<<data<<endl;
    root->right=createBinaryTree(root->right);

    return root;
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root=NULL;
    createBinaryTree(root);

    cout<<"inorder traversal -"<<endl;
    inorder(root);

    cout<<endl;
    cout<<"preorder traversal -"<<endl;
    preorder(root);

    cout<<endl;
    cout<<"postorder traversal -"<<endl;
    postorder(root);
}
