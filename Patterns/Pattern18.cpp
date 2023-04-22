#include<bits/stdc++.h>
using namespace std;
int main()
{
    // A 
    // B B 
    // C C C 
    // D D D D 
    // E E E E E 
    cout<<"Enter num:";
    int n;
    cin>>n;
    char num = 65;
    for(int i =1;i<=n;i++)
    {
        for (int j = 1;j<=i;j++)
        {
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}