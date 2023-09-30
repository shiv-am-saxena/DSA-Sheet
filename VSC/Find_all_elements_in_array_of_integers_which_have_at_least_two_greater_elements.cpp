#include<bits/stdc++.h>
using namespace std;
void printarr(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void sort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int minIND=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIND]>arr[j])
            {
                minIND=j;
            }
        }
        swap(arr[i],arr[minIND]);
    }
}
void ele(int *arr, int n)
{
    sort(arr,n);
    for(int i=0;i<(n-2);i++)
    {
        cout<<arr[i]<<" ";
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
    // sort(arr,n);
    // printarr(arr,n);
    ele(arr,n);
    return 0;
}