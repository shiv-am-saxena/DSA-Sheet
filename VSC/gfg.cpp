#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    cout<<"1. Decimal to Binary conversion"<<endl<<"2. Binary to Decimal conversion"<<endl;
    int ch;
    cout<<"Enter your choice:";
    cin>>ch;
    int dec=0,bin=0;
    switch(ch)
    {
        case 1: 
        {   //decimal to binary conversion
            cout<<"Enter the Decimal Number:";
            cin>>dec;
            vector<int> b;
            while(dec>0)
            {
                b.push_back(dec%2);
                dec=dec/2;
            }
            reverse(b.begin(),b.end());
            for(int x:b)
            {
                cout<<x;
            }
            break;
        }
        case 2:
        {
            // binary to decimal conversion
            cout<<"Enter the binary number:";
            cin>>bin;
            int ans=0, count = 0;
            vector<int> v;
            while (bin!=0)
            {
                v.push_back(bin%10);
                bin=bin/10;
                count ++;
            }
            for(int i=0;i<=count;i++)
            {
                ans=ans+(pow(2,i)*v[i]);
            }
            cout<<ans;
            break; 
        }
        default:
            cout<<"Enter the valid choice :("<<endl; 
    }
    return 0;
} 
