#include<iostream>
using namespace std;
//#define Size 5

class Stack
{
private:
    int *arr;
    int top;
    int Size;

public:
    Stack(int stackSize)
    {
        top=-1;
        Size=stackSize;
        arr=new int[Size];
    }

    void push(int ele)
    {
        if(overflow())
        {
            cout<<"Stack is overflow "<<endl;
            return;
        }
        //top++;
        arr[++top]=ele;
        cout<<ele<<" is pushed on stack "<<endl;
    }

    void pop()
    {
        if(underflow())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<arr[top]<<" element is poped "<<endl;
        top--;
    }

    bool overflow()
    {
        return (top==Size-1);
    }

    bool underflow()
    {
        return (top==-1);
    }

    void display()
    {
        if(underflow())
            cout<<"Stack is empty "<<endl;
        else
        {
            cout<<"Stack Elements are "<<endl;
            for(int i=0; i<=top; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
};

int main()
{
    int ch,ele,Size;

    cout<<"Enter the size of stack ";
    cin>>Size;
    Stack s(Size);

    /*

    s.push(10);
    s.push(20);
    s.display();
    */
    while(1)
    {
        cout<<"Enter ur choice "<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. exit"<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"Enter the Element to push ";
            cin>>ele;
            s.push(ele);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"enter correct choice"<<endl;
        }
    }
}
