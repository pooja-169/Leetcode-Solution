class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> count;
        vector<int> seen; // stores elements in sorted order

        for (int i = nums.size() - 1; i >= 0; --i) {
            auto it = lower_bound(seen.begin(), seen.end(), nums[i]);
            count.push_back(it - seen.begin());
            seen.insert(it, nums[i]); // insert in sorted position
        }

        reverse(count.begin(), count.end());
        return count;
    }
};
