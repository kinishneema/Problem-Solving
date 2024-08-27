#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,5,7,3,4,5,8},ans=INT16_MIN;
    //largest element
    for(int i=0;i<7;i++){
        if(arr[i]>ans){
          ans=arr[i];
        }
    }
    //second largest
    for(int i=0;i<7;i++){
        if(ans!=arr[i]){
          ans=max(ans,arr[i]);
        }
    }
}