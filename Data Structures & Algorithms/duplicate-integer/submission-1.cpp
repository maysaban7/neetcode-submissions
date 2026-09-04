
class Solution {
public:
    void BubbleSort(vector<int>& nums)
    {
        bool swapped;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            swapped = false;

            for (int j = 0; j < nums.size() - i - 1; ++j)
            {
                if (nums[j] > nums[j+1])
                {
                    std::swap(nums[j], nums[j+1]);
                    swapped = true;
                } 
            }
        }
    }

    bool hasDuplicate(vector<int>& nums) 
    {
        if (nums.size() <= 1)
        {
            return false;
        }

        BubbleSort(nums);

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == nums[i+1])
            {
                return true;
            }
        }

        return false;
    }
};