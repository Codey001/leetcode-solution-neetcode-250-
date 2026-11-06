class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = -1, vote = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(vote == 0){
                elem = nums[i];
                vote = 1;
            }else{
                if(nums[i] == elem) vote++;
                else vote--;
            }
        }

        return elem;
    }
};