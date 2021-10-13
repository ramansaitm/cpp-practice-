#include<iostream>
using namespace std;

void fun(int arr[],int    j,int p)
{
for(int i=p;i<=j;i++)
{
  cout<<arr[i]<<" ";
}

}

int main ()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      
  }
   //sub array loic
   cout<<"subarray is :"<<(n*(n+1))/2<<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           cout<<" { ";
         fun(arr,j,i);
         cout<<"}";
         cout<<endl;
       }
     
   }
    return 0;
}
