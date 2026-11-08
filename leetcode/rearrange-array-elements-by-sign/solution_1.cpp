class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr;
        int pos = 0;
        int neg = 0;
        int n = nums.size();

        while(pos < n && neg < n){
            if(nums[pos] < 0){
                pos++;
            }else if(nums[neg] > 0){
                neg++;
            }else{
                arr.push_back(nums[pos]);
                arr.push_back(nums[neg]);
                pos++;
                neg++;
            }
        }

        return arr;

    }
};