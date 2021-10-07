#include<iostream>
using namespace std;
int main()
{
    //for input
    int n,no;
    cin>>n;
    cin>>no;
    
    
    int max=no;
    int min=no;
    for(int i=0;i<n-1;i++)
    {
        cin>>no;
        if(no>max)
        {
            max=no;
        }if(no<min)
        {
            min=no;
        }
    }cout<<"max no :"<<max<<endl;
    cout<<"min no :"<<min<<endl;
    return 0;
}
