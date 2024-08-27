#include<iostream>
using namespace std;
void printalternate(int arr[],int size){
   for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void swapalternate(int arr[],int size){
for(int i=0;i<size;i+=2){
if(i+1<size)
{
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
}
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};
    swapalternate(arr,8);
    printalternate(arr,8);

    return 0;
}