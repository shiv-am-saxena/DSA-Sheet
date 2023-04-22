#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 1          1
	// 12        21
	// 123      321
	// 1234    4321
	// 12345  54321
	// 123456654321
    cout<<"Enter num: ";
	int n;
	cin>>n;
	int inner = n-1;
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1;j <= i;j++)
		{
			cout<<j;
		}
		for(int j = 1; j <= inner; j++)
		{
			cout<<"  ";
		}
		inner-=1;
		for(int j = i; j >= 1; j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
    return 0;
}