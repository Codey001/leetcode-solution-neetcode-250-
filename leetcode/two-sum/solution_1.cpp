class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> mp;

        for(int i=0; i<nums.size(); i++){
            int req = target - nums[i];
            if(mp.find(req) != mp.end()){
                return {i, mp[req][0]};
            }else{
                mp[nums[i]].push_back(i);
            }
        }

        return {-1,-1};
    }
};