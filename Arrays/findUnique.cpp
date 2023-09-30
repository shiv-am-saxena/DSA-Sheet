#include <bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers:" << endl;
    for (auto &i : arr)
    {
        cin>>i;
    }
    cout<< findUnique(arr,n) <<endl;
    return 0;
}