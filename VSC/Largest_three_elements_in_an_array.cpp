#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[12]={0,12,24,15,35,26,42,51,75,85,95,57};
    int max1,max2,max3;
    max1=max2=max3=arr[0];

    // for(int i=1; i<12;i++)
    // {
    //     if(max1<arr[i])
    //     {
    //         max1=arr[i];
    //     }
    // }
    // for(int i=1; i<12;i++)
    // {
    //     if((max2<arr[i]) && (arr[i]<max1))
    //     {
    //         max2=arr[i];
    //     } 
    // }
    // for(int i=1; i<12;i++)
    // {
    //     if((max3<arr[i]) && (arr[i]<max2))
    //     {
    //         max3=arr[i];
    //     }
    // }
    for(int i=1;i<12;i++)
    {
        if(arr[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3)
        {
            max3=arr[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
    return 0;
}