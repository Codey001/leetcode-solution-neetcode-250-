class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int prevSum = nums[0];

        for(int i=1;i<nums.size();i++){
            prevSum = max(prevSum + nums[i], nums[i]);
            res = max(res, prevSum);
        }

        return res;
    }
};