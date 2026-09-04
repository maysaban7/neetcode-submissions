class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_map<int, int> counter;

        for (int i = 0; i < nums.size(); ++i)
        {
            counter[nums[i]] += 1;
        }

        for (const auto& [key, value] : counter)
        {
            if (value > 1)
            {
                return true;
            }
        }
        
        return false;
    }
};