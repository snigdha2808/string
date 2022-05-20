#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.get();
    char s[1000];
    char largest[1000];
    int largest_len=0;
    while(n--)
    {
        cin.getline(s,1000);
        int len=strlen(s);
        if(len>largest_len)
        {
            largest_len=len;
            strcpy(largest,s);
        }
    }
    cout<<"Largest sentence is "<<largest<<endl;
}
