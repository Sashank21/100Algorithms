#include<iostream>
using namespace std;
int stack[1000],top=-1;                               // global declaration of top and taking static size of stack as 1000
void push(int stack[]);
void pop(int stack[]);
void display(int stack[]);
void push(int stack[])                                // function to push the element into the stack
{
    if(top==999)
        cout<<"stack overflow\n";                 // if stack is full
    else
    {
        top++;
        cout<<"enter the element: \n";            // element to be pushed
        cin>>stack[top];
    }
    return;
}
void pop(int stack[])                                 // function to pop the element from stack
{
    if(top==-1)                                   // if stack is empty
        cout<<"stack is empty \n";
    else
        top--;
    return;
}
void display(int stack[])                            // functioin to display the elements of the stack
{
    if(top==-1)
        cout<<"stack is empty \n";
    else
    {
        for(int i=top;i>-1;i--)                  // to print the elements in the stack from top to bottom
            cout<<stack[i]<<"\n";
    }
    return;
}

int main()
{
    int n;
    while(1)
    {
        cout<<"ENTER YOUR CHOICE: \n";
        cout<<"1.push 2.pop 3.display \n";
        cin>>n;
        switch(n)
        {
            case 1: push(stack);
                break;
            case 2: pop(stack);
                break;
            case 3: display(stack);
                break;
            default:
                cout<<"enter valid input"<<endl;
                break;
        }
    }
    return 0;
}
