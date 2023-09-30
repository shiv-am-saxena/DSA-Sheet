#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(stack<int> &stk,stack<int> &stc)
    {
        if(stk.empty())
        {
            return;
        }
        int x=stk.top();
        stk.pop();
        stc.push(x);
        solve(stk,stc);
        stk.push(x);
    }
public:
    stack<int> pushToLast(stack<int> &stk)
    {
        stack<int> stc;
        solve(stk,stc);
        return stc;
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
    stk=sol.pushToLast(stk);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}