#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6},sum=0;
    for(int i=0;i<5;i++)
    {
       sum=sum+arr[i];
    }
    cout<<sum;
}