class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;     // 1. breakpoint

        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) j--;               // 2. first bigger from the right
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());        // 3. reverse the suffix
    }
};