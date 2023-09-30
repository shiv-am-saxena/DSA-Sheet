#include<iostream>
using namespace std;
int main()
{
    int arr[12]={0,12,24,15,35,26,42,51,75,505,905,57};
    int max1,max2;
    max1=max2=arr[0];
    for(int i=1;i<12;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    cout<<max2<<" is the second largest number in the array";
    return 0;
}