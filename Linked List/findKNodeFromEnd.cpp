#include<iostream>

using namespace std;

class node{
    public:
    node *next;
    int data;

    node(int data)
    {
        this->next=nullptr;
        this->data=data;
    }
};

void insertAtHead(node *&head,int data)
{
    node *newNode=new node(data);
    if(head==nullptr)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

void display(node *head)
{
    while(head != nullptr)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"null"<<endl;
}

void findNode(node *head)
{
    node *
}

int main()
{
    node *head=nullptr;

    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);

    display(head);
}
