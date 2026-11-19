#include <iostream>

using namespace std;

int main()
{
int a;
int b;
char OP;
cout<<"ENTER FIRST NUMBER"<<"\n";
cin>> a;
cout<< "ENTER SECOND NUMBER"<<"\n";
cin>> b;

cout<<"ENTER THE OPERATOR(+,-,*,/)"<<"\n";
cin>> OP;

switch(OP){

case '+':
    cout<<"Your Value is:"<<a+b << endl ;
    break;

case '-':
    cout<<"Your Value is:"<<a-b << endl;
    break;

case '*':
    cout<<"Your Value is:"<<a*b << endl;
    break;

case '/':
    if(b!= 0)
        cout<<"Your Value is:"<<a/b<< endl;
    else
        cout<<"Division by zero"<< endl;
    break;
default:
    cout<<"Unknown Operator"<<endl;
}
return 0;
}

