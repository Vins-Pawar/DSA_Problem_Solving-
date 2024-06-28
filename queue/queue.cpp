#include<iostream>
using namespace std;
#define n 5

class stack{
    int *arr;
    int front;
    int back;

public:
    stack()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int data)
    {
        if(back==n-1)
        {
            cout<<"queue if full"<<endl;
        }
        back++;
        arr[back]=data;

        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue is empty ";
            return;
        }
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty ";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
            return true;
        else
            return false;
    }

    void traverse()
    {
        if(!empty())
        {
            for(int i=front;i<=back;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
};
int main()
{
    stack s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.traverse();
    cout<<endl<<endl;

    s.dequeue();
    s.traverse();
    cout<<endl<<endl;

    cout<<"peek "<<s.peek();
    cout<<endl<<endl;
    s.empty();
    s.traverse();
}
