class Solution
{
public:
    int getSum(int a, int b)
    {
        bitset<32> m(a);
        bitset<32> n(b);
        bitset<32> output;

        int i = 0, c = 0;

        while(i < 32)
        {
            output[i] = m[i] ^ n[i] ^ c;
            c = (m[i] & n[i]) | (c & (m[i] ^ n[i]));

            int j = 1;

            while(i & j) {
                i = i ^ j;
                j <<= 1;
            }

            i = i ^ j;
        }

        return output.to_ulong();
    }
};
