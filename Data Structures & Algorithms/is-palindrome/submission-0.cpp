#include <algorithm> //for std::remove

class Solution {
public:
    bool IsNotAlnum(char ch)
    {
        return !std::isalnum(ch);
    }

    bool isPalindrome(string s) 
    {
        std::size_t start = 0;
        std::size_t end = s.length() - 1;
        
        while (start < end)
        {
            if (!std::isalnum(s[start]))
            {
                ++start;
            }

            else if (!std::isalnum(s[end]))
            {
                --end;
            }

            else
            {
                if (std::tolower(s[start]) != std::tolower(s[end]))
                {
                    return false;
                }

                ++start;
                --end;
            }
        }

        return true;
    }
};
