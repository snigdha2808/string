#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    char temp=cin.get();
    /*
    returns the o/p in chunks
    int len=1;
    while(temp!='.')
    {
        len++;
        cout<<temp;
        temp=cin.get();
    }*/
    int len=0;
    while(temp!='.')
    {
        s[len++]=temp;
        temp=cin.get();
    }
    s[len]='\0';
    cout<<"length is "<<len<<endl;
    cout<<s<<endl;
}