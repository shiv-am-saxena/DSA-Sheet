#include<bits/stdc++.h>
using namespace std;
int main()
{
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    for (int i = 1; i <= 2*n-1;i++)
    {
        int star = i;
        if (i>=n) star = 2*n-i;
        for(int j = 0;j<star;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}