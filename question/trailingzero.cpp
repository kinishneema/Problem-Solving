#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;

    }
    cout<<ans;
    if(ans%10==0) cout<<"containg the zero";

}

//another method
// int trailingzero(int n)
// {
//     int count=0;
//     while(n>=5)
//     {
//         count+=n/5;
//         n/=5;
//     }
//     return count;
// }