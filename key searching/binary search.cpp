#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    // intiaze the index s with 0 and e end with n-1
    int s=0;
    int e=n-1;
    // loops for if value find at mid so return mid otherwise greather 
    // so our intial variable will be mid+1 or less e value is mid
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid;
        }else
        {
            s=mid+1;
        }
    }
    return -1;
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<< binarysearch(arr,n,key);
    return 0;
}
