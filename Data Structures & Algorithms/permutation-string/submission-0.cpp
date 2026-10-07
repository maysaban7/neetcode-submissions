#include <string>
#include <cstddef>

class Solution 
{
public:
    bool checkInclusion(string s1, string s2) 
    {
        if (s1.length() > s2.length())
        {
            return false;
        }

        int LUT_s1 [26] = {0};
        int LUT_s2 [26] = {0};

        for (int i = 0; i < s1.length(); ++i)
        {
            LUT_s1[s1[i] - 'a'] += 1;
            LUT_s2[s2[i] - 'a'] += 1;
        }

        for (int i = s1.length(); i < s2.length(); ++i)
        {
            if (IsEqual(LUT_s1, LUT_s2))
            {
                return true;
            }
            
            LUT_s2[s2[i] - 'a'] += 1;
            LUT_s2[s2[i - s1.length()] - 'a'] -= 1;
        }

        return (IsEqual(LUT_s1, LUT_s2));
    }

private:
    bool IsEqual(int arr1[], int arr2[])
    {
        for (int i = 0; i < 26; ++i)
        {
            if (arr1[i] != arr2[i])
            {
                return false;
            }
        }
        
        return true;
    }
};
