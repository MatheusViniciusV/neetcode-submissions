class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> sub;

        int output = 0, l = 0, r = 0, len = s.length();

        if(len == 0) return 0;
        if(len == 1) return 1;

        sub.insert(s[0]);

        while(r < len - 1)
        {
            if(sub.find(s[r+1]) == sub.end())
            {
                r++;
                sub.insert(s[r]);
            }
            else
            {
                sub.erase(s[l]);
                l++;
            }

            output = max(output, (int)sub.size());
        }

        return output;
    }
};
