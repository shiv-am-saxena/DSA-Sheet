#include<bits/stdc++.h>
using namespace std;
void swapAlt(int arr[],int n)
{
    int i = 0;
    int j = 1;
    while(j<=n)
    {
        swap(arr[i],arr[j]);
        if(j+2 >=n)
        {
            return;
        }
        i+=2;
        j+=2;
    }
}
void revArray(int arr[],int n)
{
    int i = 0;
    int j = n-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void printArray(int arr[],int n)
{
    for(int i =0; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &a : arr)
    {
        cin>>a;
    }
    revArray(arr,n);
    printArray(arr,n);
    cout<<e
    ndl;
    swapAlt(arr,n);
    printArray(arr,n);
    return 0;
}