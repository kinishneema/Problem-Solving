//second largest element in array

#include<iostream>
using namespace std;
int main(){
    int a[]={2,4,6,3,9},i,secondlargest;
    int largest=a[0];
    for(i=0;i<5;i++)
    {
        if(a[0]<a[i]){
            largest=a[i];
        }
    }
    secondlargest=-1;
    for(i=0;i<5;i++)
    {
        if(a[i]>secondlargest && a[i]!=largest)
        {
            secondlargest=a[i];
        }
    }
    cout<<secondlargest;
    return 0;
}