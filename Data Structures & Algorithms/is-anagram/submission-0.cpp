class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        char LUT [256] = {0};

        for (int i = 0; i < s.length(); ++i)
        {
            LUT[s[i]] += 1;
        }

        for (int i = 0; i < t.length(); ++i)
        {
            LUT[t[i]] -= 1; 
        }

        for (int i = 0; i < 256; ++i)
        {
            if (LUT[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};
