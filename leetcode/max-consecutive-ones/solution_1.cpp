class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCnt = 0;
        int cnt = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(i == 0 && nums[i]==1) cnt = 1;

            if(i!=0 && nums[i] == nums[i-1] && nums[i] == 1){
                cnt++;
                maxCnt = max(cnt, maxCnt);
            }else if (nums[i] == 1){
                cnt = 1;
            }else{
                cnt = 0;
            }
        }
        return maxCnt;
    }
};