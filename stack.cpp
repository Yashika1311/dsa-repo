//stack implementation in array
#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int size){
    this-> size = size;
    arr = new int[size];
    top = -1;
}
void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top] = element;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}
int pop()
{
    if(top>=0)
    {
        return top--;
    }
    else{
        cout<<"Stack underflow"<<endl;
        return -1;
    }
}
int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else{
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}
bool isempty(){
    if(top == -1)
    {
        return true;
    }
    else{
        return false;
    }
}
void reverseA(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        push(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = pop();
    }
}
};

int main()
{
//     Stack st(5);
//    // st.pop();                   //stack is underflow as no element is added
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(30);
//     st.push(40);
//     st.pop();
//     cout<<st.peek();
//     cout<<endl;
//     cout<<st.isempty();
    int n = 5;
    int arr[n];
    cout<<"Enter arr elements ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Stack S(n);
    S.reverseA(arr,n);

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ,";
    }
return 0;
}