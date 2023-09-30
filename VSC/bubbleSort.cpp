#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int size, int &count) {
    if (count != 0) {
        count--;
        int isSorted=1;
        cout<<"The pass number="<<count<<endl;
        for (int i = 0; i != count; i++) {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i],arr[i+1]);
                isSorted=0;
            }
        }
        if(isSorted)
        {
            count=0;
        }
        bubble(arr, size, count);
    }
    else
    {
        for (int j = 0; j != size; j++)
        {
            cout<<arr[j]<<endl;
        }
    }
}
int main()
{
    int arr[]={6,7,5,0,8,9,1,2,3,4};
//    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int count= size;
    bubble(arr,size,count);
    return 0;
}