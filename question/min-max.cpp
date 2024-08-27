#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int ans=INT16_MAX;
    //min value
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        {   
            ans=arr[i];
        }

    }
    cout<<ans<<endl;

    //max value
    ans=INT16_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        {
            ans=arr[i];
        }

    }
    cout<<ans<<endl;
    return 0;

}

