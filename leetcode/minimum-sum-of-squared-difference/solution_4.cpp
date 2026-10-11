class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        int K = k1 + k2;

        int max_diff = 0;
        for(int i=0;i<n;i++){
            max_diff = max(max_diff, abs(nums1[i] - nums2[i]));
        }
        if(max_diff == 0) return 0;

        vector<int> freq(max_diff+1, 0); // index tell the elem and value store the freq
        for(int i=0;i<n;i++){
            int diff = abs(nums1[i] - nums2[i]);
            freq[diff]++;
        }

        // now we try to reduce the freq by using the operations
        for(int i = max_diff; i>0 && K>0; i--){
            int max_ops = min(K, freq[i]);
            freq[i] -= max_ops;
            freq[i-1] += max_ops;
            K -= max_ops;
        }

        long long ans = 0;
        for(long long i=0;i<=max_diff;i++){
            ans += freq[i]*(i*i);
        }
        return ans;
    }
};