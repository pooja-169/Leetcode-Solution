class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums)
            freq[num]++;

        // Sort with custom comparator:
        // 1. Increasing frequency
        // 2. If equal, decreasing value
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b])
                return a > b; // higher number first if freq equal
            return freq[a] < freq[b]; // lower freq first
        });

        return nums;
    }
};
