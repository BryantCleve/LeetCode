class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> pre(size);
        vector<int> suff(size);
        vector<int> prod(size);

        if (!size)
            return prod;

        pre[0] = nums[0];
        suff[size - 1] = nums[size - 1];
        for (int i = 1; i < size; i++)
            pre[i] = pre[i - 1] * nums[i];
        for (int i = size - 2; i >= 0; i--)
            suff[i] = suff[i + 1] * nums[i];
        prod[0] = suff[1];
        prod[size - 1] = pre[size - 2];
        for (int i = 1; i < size - 1; i++)
            prod[i] = pre[i - 1] * suff[i + 1];
        return prod;
    }
};
