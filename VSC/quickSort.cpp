#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i=0;i!=size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int partition(int arr[], int low, int high)
{
    int pivot= arr[low];
    int i=low+1;
    int j= high;

    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low , int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main()
{
    int arr[10]={9,1,5,1,2,4,7,8,7,0};
    quickSort(arr,0,9);
    printArray(arr,10);
    return 0;
}