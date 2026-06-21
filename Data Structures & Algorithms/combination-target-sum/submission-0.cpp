class Solution
{
public:
    void rec(int indice, int alvo, vector<int>& vetor, vector<int>& valor, vector<vector<int>>& resultado)
    {
        if(alvo == 0)
        {
            resultado.push_back(vetor);
            return;
        }

        if(indice == (int)valor.size()) return;

        for(int i = 0; i * valor[indice] <= alvo; i++)
        {
            if(i > 0) vetor.push_back(valor[indice]);
            rec(indice + 1, alvo - (i * valor[indice]), vetor, valor, resultado);
        }

        for(int j = 0; j * valor[indice] <= alvo; j++)
            if(j > 0) vetor.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target)
    {
        vector<vector<int>> resultado;
        vector<int> vetor;

        sort(nums.begin(), nums.end());
        rec(0, target, vetor, nums, resultado);

        return resultado;
    }
};