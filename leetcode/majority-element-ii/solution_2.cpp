class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        for(auto num: nums){
            if(num == candidate1){
                count1++;
            }else if(num == candidate2){
                count2++;
            }else if(count1 == 0){
                candidate1 = num;
                count1 = 1;
            }else if(count2 == 0){
                candidate2 = num;
                count2 = 1;
            }else{
                count1--;
                count2--;
            }
        }

        int freq1 = 0, freq2=0;
        for(auto it: nums){
            if(it == candidate1) freq1++;
            else if(it == candidate2) freq2++;
        }
        vector<int> ans;
        int reqfreq = nums.size()/3;
        if(freq1 > reqfreq && count1 == freq1){
            ans.push_back(candidate1);
        }   
        if(freq2 > reqfreq && count2 == freq2){
            ans.push_back(candidate2);
        }

        return ans;
    }
};