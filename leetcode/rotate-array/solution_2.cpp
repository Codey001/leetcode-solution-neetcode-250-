class Solution {
public:
    void reverse(vector<int> &nums, long long start  , long long end){
        while(start<end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        long long n = nums.size();
        if(k>n) k = k%n;
        //rotate first n-k elem
        reverse(nums, 0, n-k-1);
        //rotate last k elem
        reverse(nums, n-k, n-1);
        //rotate entire array
        reverse(nums, 0, n-1);

    }
};