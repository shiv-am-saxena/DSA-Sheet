#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int size)
{
    for(int i=1;i!=size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j!=-1)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void arrayTraversal(int arr[], int size)
{
    for(int i=0;i!=size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={3,2,6,5,9,8,0,1,7,4};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    arrayTraversal(arr,size);
    return 0;
}