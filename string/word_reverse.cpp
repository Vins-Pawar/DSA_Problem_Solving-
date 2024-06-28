#include<iostream>
#include<stack>
using namespace std;


int main()
{
    string str="I LOVE INDIA";
    string op,word;
    //cout<<"Enter the string ";
    stack<char> s1;
   // stack<char> s2;
    //cout<<s1.empty();
    for(int i=0;i<str.length();i++)
    {
         if(str[i]==' '|| str[i]=='\n')
         {
             while(!s1.empty())
             {
                 word=s1.top()+word;
                 s1.pop();
             }
             op=word+" "+op;
             word.clear();
         }
         else
         {
             s1.push(str[i]);
         }
    }
    while(!s1.empty())
    {
        word=s1.top()+word;
        s1.pop();
    }
    op=word+" "+op;
    cout<<op<<endl;
}
