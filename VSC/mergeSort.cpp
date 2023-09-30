#include<bits/stdc++.h>
using namespace std;
class mergeSort
{
public:
    void arrayTraversal(int arr[], int size)
    {
        for(int i=0;i!=size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    void merge(int arr[], int low, int mid, int high)
    {
        int  i=low, j=mid+1, k=low;
        int b[high+1];
        while(i<=mid && j<=high)
        {
            if(arr[i]<arr[j])
            {
                b[k]=arr[i];
                i++;
                k++;
            }
            else
            {
                b[k]=arr[j];
                j++;
                k++;
            }
        }
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        while(j<=high)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
        for(int x=low;x<=high;x++)
        {
            arr[x]=b[x];
        }
    }
    void sort(int arr[], int low, int high)
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
};
int main()
{
    int size,low,high;
    cout<<"Enter the size of the array:";
    cin>>size;
    int* arr=new int[size];
    for(int i=0;i!=size;i++)
    {
        cout<<"Enter "<<i+1<<" element in the array:";
        cin>>arr[i];
    }
    low=0;
    high=size-1;
    mergeSort ms;
    ms.sort(arr, low,high);
    ms.arrayTraversal(arr, size);
    return 0;
}