#include<bits/stdc++.h>
using namespace std;
void sort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int minIND=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIND]>arr[j])
                minIND=j;
        }
        swap(arr[i],arr[minIND]);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"The second smallest number is "<<arr[1]<<endl;
    return 0;
}