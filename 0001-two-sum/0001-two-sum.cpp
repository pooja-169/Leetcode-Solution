class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int index_1,index_2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    index_1=i;
                    index_2=j;
                    break;
                }
            }
        }
    return {index_1, index_2};


    }
};