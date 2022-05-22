#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a=s;
    string rev="";
    int leng=s.length();
    for(int i=leng-1;i>=0;i--)
    {
        rev=rev+s[i];
    }
    if(rev==a)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }


}
