#include<iostream>
using namespace std;
//directly call
void call(int a,int b,int c)
{
  c=a+b;
  
}
int main()
{//call by value 
int a=4;
int b=4;
int c;
call(a,b,c);
cout<<c;
    return 0;
}
