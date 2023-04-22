#include<bits/stdc++.h>
using namespace std;
int main()
{
    // A 
    // A B 
    // A B C 
    // A B C D 
    // A B C D E 
    cout<<"Enter num:";
    int n;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        char alpha = 65;
        for (int j = 1; j <= i; j++)
        {
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;

    }
    return 0;
}