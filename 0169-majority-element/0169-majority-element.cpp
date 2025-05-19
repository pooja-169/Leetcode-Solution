class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m=n/2;
        unordered_map<int,int>count;
        for(int num:nums){
            count[num]++;
            if(count[num]>m) return num;
        }
        return -1;
    }
};