#include<bits/stdc++.h>
using namespace std;
void Counter(int *arr,int n)
{
    int MaxCount=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(MaxCount<count)
        {
            MaxCount=count;
        }
        
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Counter(arr,n);
    return 0;
}