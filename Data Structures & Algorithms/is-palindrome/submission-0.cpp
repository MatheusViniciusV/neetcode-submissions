class Solution
{
public:
    bool isPalindrome(string s)
    {
        int e = 0, d = s.length() - 1;

        while(e < d)
        {
            while(e < d and !isalnum(s[e])) e++;
            while(d > e and !isalnum(s[d])) d--;

            if(tolower(s[e]) != tolower(s[d])) return false;

            e++, d--;
        }

        return true;
    }
};
