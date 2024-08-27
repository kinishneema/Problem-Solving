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

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}


//  select the minimum and swap it
//tc=o(n^2)


//another method
// #include<bits/stdc++.h>
// using namespace std;
// void selection_sort(int arr[],int n){
//   for(int i=0;i<=n-2;i++){
//     int mini=i;
//     for(int j=i;j<=n-1;j++){
//         if(arr[j]<arr[mini]){
//             mini=j;
//         }
//         int temp=arr[mini];
//         arr[mini]=arr[i];
//         arr[i]=temp
//     }
//   }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     selection_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0
// }