#include<bits/stdc++.h>
using namespace std;
int main()
{
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 
    cout<<"Enter num:";
    int n;
    cin>>n;
    char ch = 64;
    for (int i = n;i>=1;i--)
    {
        for(int j = i;j<=n;j++)
        {
            cout<<char(ch+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}