#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int n)
{
    int ans = 0;
    // XORing with each element in the array
    for(int i = 0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }
    // XORing with 1 to n-1 numbers and the duplicate will be out as result
    for(int i = 1; i<n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
// void comments()
// {
    // simple hai phle array k elements ko ek dusre se XOR krwa do to usme jo double hoga vo 0 ho jaega 
    // or jo ek br aa rha hoga vo alag ho jaega phir jo ek br aa rhe hai use phir se 1 se lekr n-1 tk k numbers k sath XOR krwa do to jo phle 
    // cancel nhi hue vo ab cancel ho jaenge or phir jo number phle cancel ho gya tha vo ab bach jaega or wahi ans hai 
// }
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(auto &i : arr){
        cin>>i;
    }
    cout<<"The duplicate number is: "<<findDuplicate(arr,n)<<endl;
    return 0;
}