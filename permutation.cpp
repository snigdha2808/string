#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, i, len;
    char s[100];
    cin.getline(s,100);
        len = strlen(s);
    for (i = 0; i < len; i++)
    {
        sum = sum + s[i];
    }
    int sum1=0,j,len1;
    char s1[100];
    cin.getline(s1,100);
    len1=strlen(s1);
    for(j=0;j<len1;j++)
    {
        sum1=sum1+s1[j];
    } 
    if(sum==sum1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout<<sum<<" "<<sum1;
}