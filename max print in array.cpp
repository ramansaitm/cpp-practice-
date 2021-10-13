#include<iostream>
#include<climits>
using namespace std;
void BubleSort(int arr[],int n);
void insertion(int arr[],int n);
void selection(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //  cout<<"selection sort :";
    // selection(arr,n);
    // cout<<endl;
    //  cout<<"BubleSort :";
    //  BubleSort(arr,n);
    //  cout<<endl;
    //   cout<<"insertion sort :";
    //   insertion(arr,n);
    //   cout<<endl;
    // cout<<"max array list :";
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }cout<<endl;
   
    return 0;
    
}
























void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int current=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                current =j;
            }swap(arr[current],arr[i]);
        }
    }
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    void BubleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[i],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int current =arr[i];
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            
            j--;
        }arr[j+1]=current;
    }for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
