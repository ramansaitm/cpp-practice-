#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        }
        cin>>s;
       int  sum=0;
       int j=0, i=0;
    for(;i<n &&sum+arr[i]<=s ;i++)
    {
       sum+=arr[i];
    }
  
    if(sum==s)
    {
        cout<<j+1<<" "<<i;
        return 0;
    }
    while(i<n)
    {
        sum+=arr[i];
        
        while(sum>s)
        {
            sum-=arr[j];
            j++;
        }if(sum==s)
        {
            cout<<j+1<<" "<<i+1;
            break;
        }
        i++;
    }
    

    
    return 0;
}
