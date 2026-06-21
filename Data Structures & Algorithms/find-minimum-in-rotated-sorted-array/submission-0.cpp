class Solution
{
public:
    int recursao(int l, int r, vector<int> &nums)
    {
        if (l == r) return nums[l];

        int x = (l + r) / 2;

        if (nums[x] > nums[r])
            return recursao(x + 1, r, nums);
        else
            return recursao(l, x, nums);
    }

    int findMin(vector<int> &nums)
    {
        return recursao(0, nums.size() - 1, nums);
    }
};
