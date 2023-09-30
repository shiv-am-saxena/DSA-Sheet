#include<bits/stdc++.h>
using namespace std;
class solution
{
    private:
    void solve(vector<int>& nums, vector<int> output,int index, vector<vector<int>>&ans)
    {
        // base case
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums,output,index+1,ans);

        // include
        int elements=nums[index];
        output.push_back(elements);
        solve(nums,output,index+1,ans);
    }
    public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    // program to find the subset of array :)
    vector<int> nums;
    int n;
    int temp;
    cout<<"Enter the size of vector:";
    cin>>n;
    cout<<"Enter the elements of vector:";
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        nums.push_back(temp);
    }
    solution obj;
    vector<vector<int>> ans=obj.subsets(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}