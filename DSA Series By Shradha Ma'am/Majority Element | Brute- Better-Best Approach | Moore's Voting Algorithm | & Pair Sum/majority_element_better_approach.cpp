#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
            return ans;
    }

    return -1;
}

// main
int main()
{
    vector<int> nums;

    int x;
    while (cin >> x)
    {
        nums.push_back(x);
    }

    int result = majorityElement(nums);

    if (result == -1)
    {
        cout << "all elements are equal";
    }
    else
    {
        cout << "majority element is " << result;
    }

    return 0;
}