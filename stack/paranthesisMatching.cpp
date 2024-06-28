#include<iostream>
using namespace std;

bool matchingPair(char top,char last)
{
    //cout<<"\n\ntop ="<<top<<" last"<<last<<endl;
    if(top=='{' && last=='}')
        return true;
    else if(top=='(' && last==')')
        return true;
    else if(top=='[' && last==']')
        return true;
    else
        return false;
}

bool pMatching(string s)
{
    int top=-1;
    char arr[s.length()];

    for(char ch:s)
    {
        if(ch=='{' || ch=='(' || ch=='[')
        {
            top++;
            arr[top]=ch;
        }
        else if(ch=='}' || ch==')' || ch==']')
        {
            if(top==-1 || !matchingPair(arr[top],ch))
            {
                return false;
            }
            else
                top--;
        }
    }
    return (top==-1);

}

int main()
{
    string s;

    cout<<"Enter the string "<<endl;
    cin>>s;

    cout<<pMatching(s);
}
