class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>v;
        for(int num:nums){
            v[num]++;
            if(v[num]>1) return num;
        }
        return -1;
    }
};