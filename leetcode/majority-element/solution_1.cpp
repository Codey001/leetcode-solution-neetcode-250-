class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int ans = 0; 
        int elem = -1;
        for(auto it:mp){
            if(it.second > ans){
                ans = it.second;
                elem = it.first;
            }
        }
        return elem;
    }
};