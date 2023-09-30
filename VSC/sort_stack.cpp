#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(stack<int> &stk,int num)
    {
        if(stk.empty())
        {
            stk.push(num);
            return;
        }
        if(stk.top()<=num)
        {
            stk.push(num);
            return;
        }
        int x= stk.top();
        stk.pop();
        solve(stk,num);
        stk.push(x);
    }
public:
    void sortStack(stack<int> &stk)
    {
        if(stk.empty())
        {
            return;
        }
        int num=stk.top();
        stk.pop();
        sortStack(stk);
        solve(stk,num);
    }
};
int main()
{
    stack<int> stk;
    stk.push(7);
    stk.push(4);
    stk.push(2);
    stk.push(5);
    stk.push(9);
    stk.push(6);
    Solution sol;
    sol.sortStack(stk);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}