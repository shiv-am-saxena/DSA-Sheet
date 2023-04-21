#include<bits/stdc++.h>
using namespace std;
int main()
{
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
    cout<<"Enter num:";
    int n;
    cin>>n;
    int outer = n-1;
    for (int i = 0; i < (n);i+=1)
    {
        for(int j = 0;j < outer;j++)
        {
            cout<<" ";
        }
        outer--;
        for(int j = 0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}