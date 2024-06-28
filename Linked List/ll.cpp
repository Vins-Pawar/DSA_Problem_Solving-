#include<iostream>

using namespace std;

class node
{
    public:
    node *next;
    int data;

    node(int data)
    {
         this->next=NULL;
         this->data=data;
    }

    //inserAtHead()
};


void insertAtHead(node *&head,int data)
{
     node *newNode=new node(data);

     if(head==NULL)
     {
         //cout<<"head null"<<endl;
         head=newNode;
     }
     else{
        newNode->next=head;
        head=newNode;
     }
}

int findLength(node *head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}

bool isEmpty(node *head)
{
    if(head==NULL)
    {
        return true;
    }
    else
        return false;
}

void insertAtTail(node *&head,int data)
{
    node *newNode=new node(data);
    node *temp=head;
    if(head==nullptr)
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}


void display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}

void deleteByValue(node *&head,int val)
{
    node *temp=head;
    if(head==nullptr)
        return;

    if(temp->data==val)
    {
       head=temp->next;
       free(temp);
       return;
    }
     while (temp->next != nullptr) {
        if (temp->next->data == val) {
            node* del = temp->next; // Store a reference to the node to be deleted
            temp->next = temp->next->next; // Update the next pointer to skip the node
            free(del); // Free the node we intended to delete
            return;
        }
        temp = temp->next;
    }
}

void deleteFirstNode(node *&head)
{
    if(head==nullptr)
        return;
    else{
        node *temp=head;
        head=head->next;
        free(temp);
    }
}

void deleteLastNode(node *&head)
{
    node *temp=head;
    if(temp==nullptr)
        return;
    else if(temp->next==nullptr)
    {
        free(temp);
        head=nullptr;
    }
    else{
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=nullptr;
    }
}

int main()
{

    node *head=nullptr;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);

    insertAtTail(head,200);
    insertAtTail(head,300);
    insertAtTail(head,400);


    cout<<"length of linked list "<<findLength(head)<<endl;
    cout<<"list is empty "<<isEmpty(head)<<endl;
    display(head);
    deleteByValue(head,400);
    deleteFirstNode(head);
    deleteLastNode(head);
    display(head);
}
