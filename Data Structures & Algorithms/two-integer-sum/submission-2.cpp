class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = 1;

        while (left < nums.size() - 1)
        {
            if (nums[left] + nums[right] == target)
            {
                return {left, right};
            }

            if (right == nums.size() - 1)
            {
                ++left; 
                right = left + 1;
                continue;
            }

            ++right;
        }

        return {};
    }
};
