#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtHead(node* &head, int val){
node *newNode=new node(val);

    newNode->next=head;
    head=newNode;
}

void insertAtEnd(node *&head, int val){
    node *newNode=new node(val);
//    node *newNode=new node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void InsertInMiddle(node *head,int val,int index){
    node *newNode=new node(val);
    while(index>0){
        head=head->next;
        index--;
    }
    newNode->next=head->next;
    head->next=newNode;
}

void display(node *head){
   while(head != NULL){

    cout<<head->data<<"->";
    head=head->next;
   }
   cout<<"null"<<endl;
}

int main(){
    node *head=NULL;
    InsertAtHead(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    InsertInMiddle(head,40,0);
    display(head);
}
