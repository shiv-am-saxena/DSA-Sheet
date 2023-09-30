#include<bits/stdc++.h>
using namespace std;
class Solution
{  
    private:
    bool check(char a)
    {
        if(a == '+' || a == '-' || a == '*' || a == '/') return true;
        else return false;
    }
    public:
        bool bra(string exp)
        {
            stack<char> s;
            for(int i=0;exp[i]!='\0';i++)
            {
                if(exp[i]=='(' || exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
                {
                    s.push(exp[i]);
                }
                if(exp[i]==')')
                {
                    char a=s.top();
                    if(!check(a)) return true;
                    else 
                    {
                        s.pop();
                        s.pop();
                    }
                }
            }
            return false;
        }
    
};
int main()
{
    string exp="((a+b)+c((b-m)a+c))";
    Solution sol;
    if(sol.bra(exp)) cout<<"Redundant Brackets present.";
    else cout<<"Redundant brackets are not present.";
    
    return 0;
}