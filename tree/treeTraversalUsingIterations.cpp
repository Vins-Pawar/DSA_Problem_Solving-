#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node * buildTree(node* root)
{
    int data;
    cout<<"Enter the node data "<<endl;
    cin>>data;

    if(data==-1)
        return NULL;

    root=new node(data);
    root->left=buildTree(root->left);
    root->right=buildTree(root->right);
    return root;
}

//void inorder(node* root)
//{
////cout<<"i a in inorder"<<endl;
//if(root==NULL)
//{
//    return;
//}
//inorder(root->left);
//cout<<root->data<<" ";
//inorder(root->right);
//}

void inorder(node *root)
{
    //cout<<"hi"<<endl;
    stack<node*> s;

    node * curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

void levelOrderTraversal(node *root)
{
    queue<node *>q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();

        if(temp==nullptr)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=nullptr)
            {
                q.push(temp->left);
            }
            if(temp->right!=nullptr)
            {
                q.push(temp->right);
            }
        }

    }
}


void reverseLevelOrder(node * root)
{
    queue<node*>q;
    stack<node*>s;

    q.push(root);
    q.push(nullptr);

    while(!q.empty())
    {
        node * temp=q.front();
        q.pop();
        if(temp==nullptr)
        {
            q.push(nullptr);
            s.push(nullptr);
        }
        else
        {
            s.push(temp);
            if(temp->left != nullptr)
            {
                q.push(temp->left);
            }
            if(temp->right != nullptr)
            {
                q.push(temp->right);
            }
        }
    }

        while(!s.empty())
        {
            cout<<"hi";
            node *temp=s.top();
            s.pop();
            if(temp==nullptr)
            {
                cout<<endl;
            }
            else
                cout<<temp->data<<" ";
        }

}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node* root=NULL;
    root=buildTree(root);
    //inorder(root);
    //levelOrderTraversal(root);
    reverseLevelOrder(root);

}
