#include <iostream>
#include <vector>
#include <map>
using namespace std;
// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    if (n == 0)
    {
        return ans;
    }
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            positive.push_back(nums[i]);
        }
        else
            negative.push_back(nums[i]);
    }
    ans.clear();
    for (int i = 0; i < positive.size(); i++)
    {
        ans.push_back(positive[i]);
        ans.push_back(negative[i]);
    }
    return ans;
}
vector<int> findLonely(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    if (n == 0)
    {
        return ans;
    }
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    for(pair<int,int>n:m)
    {
        int x=n.first,y=n.second;
        if (y==1 && mp.count(x+1)==0 && mp.count(x-1)==0)
        {
            ans.push_back(x);
        }
        
    }
    return ans;
    
        
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    return 0;
}