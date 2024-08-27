// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++)
//     {
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;

// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
                }


        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    

}