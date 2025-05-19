class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {
            if (find(v.begin(), v.end(), nums[i]) == v.end()) {
                v.push_back(nums[i]);
            }
        }

 
        nums = v;

      
        return nums.size();
    }
};
