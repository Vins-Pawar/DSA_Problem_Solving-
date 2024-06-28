#include<iostream>
using namespace std;

class node
{
    int data;
    node *next;
public:
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class queue
{
    node *front;
    node *back;

public:

    queue()
    {
        //head=NULL;
        front=NULL;
        back=NULL;
    }

    void push(int val)
    {
        node *newnode=new node(val);
        if(front==NULL)
        {

        }
        back->next=newnode;
        newnode=back;
    }
};
int main()
{

}
