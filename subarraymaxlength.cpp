#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // 1st ieration let us assume
    int pd=arr[0]-arr[1];
    //let we have 2 ans becausse we are finding current value for 2 no
    int ans=2;
 
    //my current value =2 becoz we have already pd 2 element difference in 1st itreation;
    int current=2;
    // we strated with 2nd iteration becoz i did first itreation
    int i=2;
    while
    (i<n)
    {
        if(pd==arr[i]-arr[i-1])
        {
            current=current+1;
        }else
        {
            pd=arr[i]-arr[i-1];
            current =2;
        }ans=max(ans,current);
        i++;
        
    }
    cout<<ans;
    return 0;
}
