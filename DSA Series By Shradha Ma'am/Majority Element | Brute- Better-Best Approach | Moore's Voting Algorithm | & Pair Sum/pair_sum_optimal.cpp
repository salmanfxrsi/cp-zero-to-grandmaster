#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1];

    return 0;
}