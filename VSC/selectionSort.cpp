#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
    for(int i=0; i!=size;i++)
    {
        int minInd=i;
        for(int j=i+1;j!=size;j++)
        {
            if(arr[j]<arr[minInd])
            {
                minInd=j;
            }
        }
        swap(arr[i], arr[minInd]);
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
    selectionSort(arr,size);
    arrayTraversal(arr,size);
    return 0;
}