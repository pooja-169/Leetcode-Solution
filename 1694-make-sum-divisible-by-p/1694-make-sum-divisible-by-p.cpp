class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long total = 0;
        for (int num : nums)
            total = (total + num) % p;

        if (total == 0)
            return 0;

        unordered_map<int, int> mod_map;
        mod_map[0] = -1;
        long prefix = 0;
        int res = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefix = (prefix + nums[i]) % p;
            int target = (prefix - total + p) % p;

            if (mod_map.count(target)) {
                res = min(res, i - mod_map[target]);
            }
            mod_map[prefix] = i;
        }

        return res == nums.size() ? -1 : res;
    }
};
