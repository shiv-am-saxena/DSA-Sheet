#include<bits/stdc++.h>
using namespace std;
int main()
{
    // * * * * * 
    // *       * 
    // *       * 
    // *       * 
    // * * * * * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    int space = n-2;
    for(int i = 1;i<=n;i++)
    {
        if(i==1 || i == n)
        {
            for(int j = 1; j<=n;j++)
            {
                cout<<"* ";
            }
        }
        if(i != 1 && i!= n)
        {
            cout<<"* ";
            for(int j = 0;j<space;j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}