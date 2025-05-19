class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        nums=v;
        
    }
};