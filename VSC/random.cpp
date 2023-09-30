#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,cnt=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<cnt<<" ";
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}