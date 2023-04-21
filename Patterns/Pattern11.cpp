#include<bits/stdc++.h>
using namespace std;
int main()
{
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
    cout<<"Enter num:";
    int n;
    cin>>n;
    int outer=n-1;
    for (int i= 0;i<(2*n-1);i+=2)
    {
        for(int j = 0;j<outer;j++)
        {
            cout<<" ";
        }
        outer--;
        for(int j = 0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i= (2*n-1);i>0;i-=2)
    {
        outer++;
        for(int j = 0;j<outer;j++)
        {
            cout<<" ";
        }
        for(int j = 0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}