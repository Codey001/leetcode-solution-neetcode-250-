class Solution {
public:
    void reverse(vector<int> &nums, int start  , int end){
        while(start<end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //rotate first n-k elem
        reverse(nums, 0, n-k-1);
        //rotate last k elem
        reverse(nums, n-k, n-1);
        //rotate entire array
        reverse(nums, 0, n-1);

    }
};