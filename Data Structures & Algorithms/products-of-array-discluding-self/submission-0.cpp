class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefixo(n), sufixo(n), resultado(n);

        prefixo[0] = sufixo[n - 1] = 1;

        for(int i = 1; i < n; i++) {
            prefixo[i] = nums[i - 1] * prefixo[i - 1];
            sufixo[n - 1 - i] = nums[n - i] * sufixo[n - i];
        }
        for(int i = 0; i < n; i++)
            resultado[i] = prefixo[i] * sufixo[i];

        return resultado;
    }
};
