#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="fdjnvdjnvdffje";

    //convert into upper case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    //convert to lower case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str<<endl;


    //by direct function

    string s="vndjnvjdvf";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}