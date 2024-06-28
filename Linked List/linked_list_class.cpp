#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
     this->data=data;
     this->next=NULL;
  }
};
void Treverse(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertNode(Node *&head,int data)
{
   // cout<<"i ";
    Node *temp=new Node(data);
    if(head==NULL)
    {
        cout<<"null head "<<endl;;
        head=new Node(data);
        temp=head;
    }
    else
    {
         temp->next=head;
         head=temp;
    }
}
int main()
{
    Node *head=new Node(10);
     Node *temp;

     int n=5;

    //Treverse(head);

    insertNode(head,10);
    insertNode(head,20);
    insertNode(head,30);
    insertNode(head,40);

    Treverse(head);
}
