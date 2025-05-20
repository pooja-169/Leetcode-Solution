class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>count;
        vector<int>duplicates;
        for(int num:nums){
            count[num]++;
            if(count[num]==2) duplicates.push_back(num);
        }
        return duplicates;
    }
};