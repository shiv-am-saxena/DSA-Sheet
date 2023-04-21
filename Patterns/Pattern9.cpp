#include<bits/stdc++.h>
using namespace std;
int main()
{
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * *
//       * * *
//         *
    cout<<"Enter num:";
    int n;
    cin>>n;
    int outer= 0;
    for (int i = (2*n-1);i > 0;i-=2)
    {
        for (int j = 0;j<outer;j++)
        {
            cout<<"  ";
        }
        outer++;
        for(int j = 0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}