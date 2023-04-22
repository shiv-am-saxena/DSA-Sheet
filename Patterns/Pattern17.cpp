#include<bits/stdc++.h>
using namespace std;
int main()
{
    // A B C D E 
    // A B C D 
    // A B C 
    // A B 
    // A 
    cout<<"Enter num:";
    int n;
    cin>>n;
    for (int i = n; i>0;i--)
    {
        char num = 65;
        for ( int j = 1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}