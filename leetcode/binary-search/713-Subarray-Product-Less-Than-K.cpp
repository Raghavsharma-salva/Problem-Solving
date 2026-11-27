class Solution {
public:
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
        int prod = 1, j = 0, ans = 0;

        if (k <= 1) {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++) {
            prod *= nums[i];

            while (prod >= k && j <= i) {
                prod /= nums[j];
                j++;
            }

            ans += (i - j + 1);
        }

        return ans;
    }
};