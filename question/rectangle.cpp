#include<iostream>
using namespace std;
bool isitrectangle(int a,int b,int c,int d){
   if(a==b && c==d ||a==c && b==d || a==d && b==c ) return 1;
   else return 0;
};
int main(){
    int a,b,c,d;
    cin>>a,b,c,d;
    cout<<isitrectangle(a,b,c,d);
}