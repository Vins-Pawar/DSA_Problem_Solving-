
#include<iostream>
#include<queue>
using namespace std;


int main()
{
    string str="I LOVE INDIA";
    string op,word;
    queue<char> q;

    for(char s:str)
    {
        q.push(s);
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            op=word+" "+op;
            q.pop();
            word.clear();
        }
        else
        {
            word+=q.front();
            q.pop();
        }
    }
    while(!q.empty())
    {
        word+=q.front();
        q.pop();
    }
    op=word+" "+op;
    cout<<op<<endl;
}
