#include<bits/stdc++.h>
using namespace std;
int main()
{
    // *                 * 
    // * *             * * 
    // * * *         * * * 
    // * * * *     * * * * 
    // * * * * * * * * * * 
    // * * * *     * * * * 
    // * * *         * * * 
    // * *             * * 
    // *                 * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    int inner = n-1;
    int cnt = 0;
    for(int i = 1;i <= 2*n-1;i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2*n-i;
            if (cnt==0)
            {
                cnt++;
                inner = 1;
            }
        }
        for(int j = 0;j<star;j++)
        {
            cout<<"* ";
        }
        for (int j = 0; j < inner; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < inner; j++)
        {
            cout<<"  ";
        }
        for(int j = 0;j<star;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        if(i > n) inner++;
        else inner--;
    }
    return 0;
}