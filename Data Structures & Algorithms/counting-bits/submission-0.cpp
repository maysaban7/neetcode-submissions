#include <cstddef>

class Solution 
{
public:
    vector<int> countBits(int n) 
    {
        if (n == 0)
        {
            return {0};
        }

        vector<int> res;
        int cnt = 0;

        for (std::size_t i = 0; i <= n; ++i)
        {
            int j = i;

            while (j != 0)
            {
                j = j & (j - 1);
                ++cnt;
            }

            res.push_back(cnt);
            cnt = 0;
        }

        return res;
    }
};
