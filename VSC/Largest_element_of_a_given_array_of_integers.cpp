#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,50,55,20,40,60,80,51,87,49};
    int max = arr[0];
    for(int i= 1; i<10;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    cout<<max<<" is the largest number";
    return 0;
}