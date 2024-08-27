#include<iostream>
// #include<stack>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this ->size=size;
        arr=new int [size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }
    void pop(){
        if(top>=0){
          top--;
        }
        else{
            cout<<"stack underflow"<<endl;

        }

    }
    int peak(){
        if(top>=0 )
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;

        }

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }

};
int main(){

    stack st(5);
    st.push(22);
    st.push(23);
    st.push(44);
    
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    // stack<int> s;
    // s.push(2);
    // s.push(3);

    // s.pop();
    // cout<<"printing the top element"<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }
    // cout<<"size of stack is "<<s.size()<<endl;


    return 0;
}