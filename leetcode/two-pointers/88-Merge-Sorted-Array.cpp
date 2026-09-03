class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Destination vector of size m + n
        std::vector<int> result(m + n);

        // std::merge requires valid input ranges (nums1 up to index m)
        std::merge(nums1.begin(), nums1.begin() + m, 
                   nums2.begin(), nums2.begin() + n, 
                   result.begin());

        // Copy back to nums1 to update in-place
        nums1 = result;
    }
};