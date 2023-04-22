#include<bits/stdc++.h>
using namespace std;
int main()
{
    // * * * * * * * * * * 
    // * * * *     * * * * 
    // * * *         * * * 
    // * *             * * 
    // *                 * 
    // *                 * 
    // * *             * * 
    // * * *         * * * 
    // * * * *     * * * * 
    // * * * * * * * * * * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    int innerSpace = 0;
    int a = n;
    for (int i = n;i>=1;i--)
    {
        for (int j = 0;j<i;j++)
        {
            cout<<"* ";
        }
        for (int j = 0;j<innerSpace;j++)
        {
            cout<<"  ";
        }
        for (int j = 0;j<innerSpace;j++)
        {
            cout<<"  ";
        }
        innerSpace++;
        for (int j = 0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 1;i<=n;i++)
    {
        for (int j = 0;j<i;j++)
        {
            cout<<"* ";
        }
        innerSpace--;
        for (int j = 0;j<innerSpace;j++)
        {
            cout<<"  ";
        }
        for (int j = 0;j<innerSpace;j++)
        {
            cout<<"  ";
        }
        for (int j = 0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}