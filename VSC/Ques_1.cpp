// Write a C++ program to find the largest element of a given array of integers.
#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int low, int mid, int high)
{
    
}
int sort(int arr[],int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        sort(arr,low,mid);
        sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int largest(int arr[],int n)
{
    sort(arr,0,n-1);
    return arr[n];
}
int main()
{
    int arr[]={9,5,1,2,8,7,3,4,6,0};
    int size=sizeof(arr)/sizeof(int);
    cout<<"The largest number of array is "<<largest(arr,size)<<endl;
    return 0;
}