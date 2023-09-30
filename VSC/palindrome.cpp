#include<iostream>
using namespace std;
class palindrome
{
    private:
    bool valid(char c)
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
            return true;
        return false;
    }
    char tolower(char c)
    {
        if(c>='A' && c<='Z')
            return c+32;
        return c;
    }
    void reverse(string &s)
    {
        int i=0, j=s.length()-1;
        while(i<j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
    public:
    bool pal(string s)
    {
        string s1;
        for(int i=0; i<s.length(); i++)
        {
            if(valid(s[i]))
                s1.push_back(tolower(s[i]));
        }
        string s2=s1;
        reverse(s2);
        if(s1==s2)
            return true;
        else
            return false;
    }
};
int main()
{
    string s;
    cin>>s;
    palindrome p;
    if(p.pal(s))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}