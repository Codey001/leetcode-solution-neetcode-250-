class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        priority_queue<int> pq;
        int allowed_reduction = k1+k2;
        int n = nums1.size();

        for(int i=0; i<n;i++){
            pq.push(abs(nums1[i] - nums2[i]));
        }

        while(allowed_reduction){
            int top = pq.top(); pq.pop();
            if(top == 0) break;

            pq.push(top - 1);


            cout<<"current "<<top<<" - ";

            cout<<"pushed "<<top-1<<endl;
            allowed_reduction--;
            

        }

        long long answer = 0;


        while(!pq.size() == 0){
            int elem = pq.top(); pq.pop();
            answer += (elem*elem);
        }

        return answer;
    }
};