class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;
        
        vector<int> contagem(26, 0);

        for(int i = 0; i < s.length(); i++) {
            contagem[s[i] - 'a']++;
            contagem[t[i] - 'a']--;
        }

        for(auto x : contagem) {
            if(x != 0)
                return false;
        }

        return true;
    }
};
