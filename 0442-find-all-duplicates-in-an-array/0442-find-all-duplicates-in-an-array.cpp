class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        // unordered_map<int,int>count;
        vector<int>duplicates;
        // for(int num:nums){
        //     count[num]++;
        //     if(count[num]==2) duplicates.push_back(num);
        // }
        // return duplicates;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                duplicates.push_back(abs(nums[i]));
            }
            else{
                nums[abs(nums[i])-1]*=-1;
            }
        }
        return duplicates;
    }
};