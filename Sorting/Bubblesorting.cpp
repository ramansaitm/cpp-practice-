#include<iostream>
using namespace std;
void BubbleSorting(int arr[],int n)
{//for iteration 1 to n-3 till
    for(int i=0;i<n;i++)
    {
        //for iterantion for single strating to till i iteration
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {//swapping for two no
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
    }
    
    } for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=5;
    int arr[n]={5,3,4,2,1};
    BubbleSorting(arr,n);
   
    return 0;
}
