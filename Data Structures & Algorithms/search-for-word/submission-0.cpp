class Solution {
public:
    bool vef(vector<vector<char>>& b, vector<vector<bool>>& f,
             string w, int i, int j, int c, int m, int n)
    {
        if(c == w.length()-1) return true;

        bool r = false;
        
        f[i][j] = false;
        
        if(i > 0)     if(f[i-1][j] and b[i-1][j] == w[c+1]) if(vef(b, f, w, i-1, j, c+1, m, n)) r = true;
        if(j > 0)     if(f[i][j-1] and b[i][j-1] == w[c+1]) if(vef(b, f, w, i, j-1, c+1, m, n)) r = true;
        if(i < m - 1) if(f[i+1][j] and b[i+1][j] == w[c+1]) if(vef(b, f, w, i+1, j, c+1, m, n)) r = true;
        if(j < n - 1) if(f[i][j+1] and b[i][j+1] == w[c+1]) if(vef(b, f, w, i, j+1, c+1, m, n)) r = true;

        f[i][j] = true;

        return r;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        bool output = false;
        for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            if(board[i][j] == word[0])
            {
                vector<vector<bool>> f(m, vector<bool>(n, true));
                if(vef(board, f, word, i, j, 0, m, n)) output = true;
            }
        }
        return output;
    }
};
