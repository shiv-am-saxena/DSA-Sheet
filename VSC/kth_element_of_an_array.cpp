#include<bits/stdc++.h>
using namespace std;

void printarr(int *arr, int n)
{
    for(int f=0;f<n;f++)
    {
        cout<<arr[f];
    }
}
void sort(int *arr, int n)//selection sort
{
    for(int i=0;i<n;i++)
    {
        int minInd=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minInd]>arr[j])
            {
                minInd=j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
}
void kthnum(int *arr,int n,int k)
{
    sort(arr,n);
    for(int i=1;i<=k;i++)
    {
        cout<<arr[n-i]<<endl;
    }
}
int main()
{
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int m=0;m<n;m++)
    {
        cin>>arr[m];    
    }
    sort(arr,n);
    printarr(arr,n);
    cout<<"Enter the value of K:";
    cin>>k;
    kthnum(arr,n,k);

    return 0;
}