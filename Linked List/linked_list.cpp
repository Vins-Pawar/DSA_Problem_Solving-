#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void InsertAtHead(node* &head,int val)
{
    //printf("head in InsertAtEnd =%p\n",&head);
    node *newNode=new node(val);
    newNode->next=head;
    head=newNode;
}

void InsertAtEnd(node* &head, int val)
{
    //cout<<"head in InsertAtEnd "<<head<<endl;;
    node *newnode=new node(val);
    node *temp=head;
    //printf("head in InsertAtEnd =%p\n",&head);
    if(head==NULL)
    {
        head=newnode;
        //cout<<"hi";
        return;
    }

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
//     while(head->next !=NULL){
//        head=head->next;
//     }
//     head->next=newnode;

}
int main()
{
//    node *head = new node(10);
    //printf("head in main =%p\n",&head);
    // node *one=new node(20);
    // head->next=one;

    // node* two =new node(30);
    // one->next=two;

   // display(head);
   // cout<<"head in main "<<head<<endl;
    node *head=NULL;
    InsertAtEnd(head,50);
   // cout<<"head in main "<<head<<endl;
    InsertAtEnd(head,500);
   // cout<<"head in main "<<head<<endl;
    InsertAtEnd(head,5000);

    InsertAtHead(head,2);
    display(head);
}
