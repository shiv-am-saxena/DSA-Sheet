#include<bits/stdc++.h>
using namespace std;
int main()
{
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
    cout<<"Enter num:";
    int n;
    cin>>n;
    int outer = n-1;
    for (int i = 1;i<=2*n;i+=2)
    {
        int num = 65;
        for (int j = 0;j<outer;j++)
        {
            cout<<" ";
        }
        outer--;
        int diff = 0;
        for (int j = 1; j<=i;j++)
        {
            if (j > i/2) 
            {
                cout<<char(num-diff);
                diff++;
            }
            else
            {
                cout<<char(num);
                num++;
            }
        }
        cout<<endl;
    }
    return 0;
}