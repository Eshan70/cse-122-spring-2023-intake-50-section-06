#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j;
    string s,p;
    cin>>s;
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        p[j]=s[i];
    }
    if(s[0]==p[0] || s[2]==p[2])
        cout<<"palindrome";
        else
        cout<<"not palindrome";
    return 0;
}
