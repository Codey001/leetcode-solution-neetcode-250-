class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //find all the possible subarray and then return the largest sum

        int maxSum = 0;
        int sum = 0;

        int n = nums.size();
        int i=0;
        while(i<n){
            sum += nums[i];
            i++;
            maxSum = max(sum, maxSum);

            if(sum < 0){
                sum = 0;
            }
        }

        return maxSum;
    }
};