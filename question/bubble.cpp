#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n)
    {
        bool swapped=false;
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=true;
            }
        }
        counter++;
        if(swapped==false)
        {
            //already sort
            break;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}