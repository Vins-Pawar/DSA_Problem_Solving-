#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head;

//create n nodes in one go
void createNode(int n)
{
    //struct node *head;
    struct node *temp;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    head->data=10;
    temp=head;
    cout<<"head created"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<i<<" created"<<endl;
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        temp->next=newnode;
        newnode->next=NULL;
        newnode->data=i*10;
        temp=newnode;
    }
}

void createNode()
{
    int num;
    cout<<"enter no ";
    cin>>num;
    struct node *temp;
    if(head==NULL)
    {
        head=(struct node *)malloc(sizeof(struct node));
        head->next=NULL;
        head->data=num;
        temp=head;
        return;
    }
    struct node* newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    temp->next=newnode;
    newnode->next=NULL;
    newnode->data=num;
    temp=newnode;
    //cout<<"newnode->data "<<newnode->data<<endl;
}

void traverse()
{

    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<null;
}
int main()
{
    createNode();
    createNode();
    createNode();
    createNode();
    traverse();
}
