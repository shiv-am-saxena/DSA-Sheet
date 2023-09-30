//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    private:
    bool match(char a,char b)
    {
        if((a == '{') && (b=='}')) return true;
        if((a == '[') && (b==']')) return true;
        if((a == '(') && (b==')')) return true;
        return false;
    }
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;x[i]!='\0';i++)
        {
            if((x[i] == '{') || (x[i] == '[') || (x[i] == '('))
            {
                st.push(x[i]);
            }
            else if((x[i] == '}') || (x[i] == ']') || (x[i] == ')'))
            {
            
                if(st.empty() || !match(st.top(),x[i]))
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(st.empty()) return  ;
        else return false;
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
