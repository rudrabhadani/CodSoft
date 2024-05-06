#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;
    cout<<"Enter your operation:"<<endl;
    cin>>op;
    cout<<"Enter a value of a and b:"<<endl;
    cin>>a>>b;
    switch(op)
{
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
    case '/':
    cout<<a/b;
    break;
    default:
    cout<<"Error! operator is not correct :";
}
return 0;
}