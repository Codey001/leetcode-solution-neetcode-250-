class Solution {
public:
    void reverse(vector<int> &nums, int start, int end){
        while(start<end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size() -1;

        for(int i = n-1; i>=0;i--){
            if(nums[i] < nums[i+1]){
                //find the number just greater than nums[i]
                int num = INT_MAX;
                int idx = -1;
                
                for(int j = i+1;j<=n;j++){
                    if(nums[j]<=num && nums[j]>nums[i]){
                        num = nums[j];
                        idx = j;
                    }
                }

                swap(nums[i], nums[idx]);
                reverse(nums, i+1, n);
                return;
            }
        }

        reverse(nums, 0, n);
        return;
    }
};