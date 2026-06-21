class Solution {
public:
    bool isValid(string s)
    {
        stack<char> pilha;

        for(auto c : s)
        {
            if(c == '(' or c == '[' or c == '{')
            {
                pilha.push(c);
            }
            else
            {
                if(pilha.empty()) return false;

                char t = pilha.top();

                if ((c == ')' and t != '(') or
                    (c == ']' and t != '[') or
                    (c == '}' and t != '{'))
                    return false;

                pilha.pop();
            }
        }

        return pilha.empty();
    }
};
