#include<iostream>
using namespace std;
int main()
{
    int n,i,ld,rev=0,t;
    cin>>n;
    t=n;
    while(n>0)
    {
      ld=n%10;
      n=n/10;
      rev=(rev*10)+ld;

    }
    cout<<rev;
    if(t==rev)
    {
        cout<<" is palindrome number";
    }
    else{
        cout<<"is not a palindrome";
    }
    return 0;
}