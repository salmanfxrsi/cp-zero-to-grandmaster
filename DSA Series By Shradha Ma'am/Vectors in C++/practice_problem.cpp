#include <iostream>
#include <vector>
using namespace std;

// linear search
int problem_one(vector<int> &nums, int num)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) == num)
            return i;
    }
    return -1;
}

// reverse array
int problem_two(vector<int> &nums)
{
    for (int i = 0, j = nums.size() - 1; i < j; i++, j--)
    {
        swap(nums[i], nums[j]);
    }
}

// print vector
void print_vec(vector<int> vec)
{
    for (int val : vec)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "The number is in idx: " << problem_one(nums, 2) << endl;

    problem_two(nums);
    print_vec(nums);

    return 0;
}