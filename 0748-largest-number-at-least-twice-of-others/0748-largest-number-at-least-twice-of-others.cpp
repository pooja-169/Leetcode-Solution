class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        v=nums;
        int count=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[n-1]>=2*v[i]){
                count++;
            }
        }
        if(count==n-1){
            for(int i=0;i<n;i++){
                if(v[n-1]==nums[i]){
                    return i;
                }
            }
        }
        return -1;
    }
};