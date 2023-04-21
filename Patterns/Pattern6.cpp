#include<bits/stdc++.h>
using namespace std;
int main()
{
    // * * * * *
    // * * * * 
    // * * * 
    // * *
    // * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}