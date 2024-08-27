#include<iostream>
using namespace std;
int countdigit(int num){
    int count=0;
    while(num){
        count++;
        num/=10;


    }
    return count;
}
bool armstrong(int num,int digit)
{
    int n=num,ans=0,rem;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+rem*digit;
    }
    if(ans==num) return 1;
    else return 0;
}
int main(){
    int num;
    cin>>num;
    //count digit
    int digit=countdigit(num);
    //armstrongnumber
    cout<<armstrong(num,digit);

}