class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int LUT [256] = {false};

        int right = 0;
        int left = 0;
        int maxCnt = 0;

        while (right != s.length())
        {
            if (LUT[s[right]] == false)
            {
                LUT[s[right]] = true;

                int currWindowSize = right - left + 1;

                if (currWindowSize > maxCnt)
                {
                    maxCnt = currWindowSize;
                }

                ++right;
            }

            else
            {
                LUT[s[left]] = false;
                ++left;
            }
        }

        return maxCnt;
    }
};
