class Solution
{
public:
    bool isAnagram(string a, string b)
    {
        if(a.length() != b.length()) return false;

        vector<int> cont(26, 0);

        for(int i = 0; i < a.size(); i++)
        {
            cont[a[i] - 'a']++;
            cont[b[i] - 'a']--;
        }

        for(auto c : cont)
        {
            if(c != 0) return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<bool> vef(strs.size(), true);
        vector<vector<string>> output;

        for(int i = 0; i < strs.size(); i++)
        {
            if(vef[i])
            {
                vector<string> aux;

                aux.push_back(strs[i]);

                for(int j = i + 1; j < strs.size(); j++)
                {
                    if(isAnagram(strs[i], strs[j]))
                    {
                        aux.push_back(strs[j]);
                        vef[j] = false;
                    }
                }

                output.push_back(aux);
            }
        }

        return output;
    }
};
