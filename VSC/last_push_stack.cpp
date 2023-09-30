#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(stack<int> &stk, int val)
    {
        if(stk.empty())
        {
            stk.push(val);
            return;
        }
        int x=stk.top();
        stk.pop();
        solve(stk,val);
        // backtrack
        stk.push(x);
    }
public:
    stack<int> pushToLast(stack<int> &stk,int val)
    {
        // BaseCase
        solve(stk,val);
        return stk;
    }
};
int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    Solution sol;
    sol.pushToLast(stk,0);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}