class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n / 3;
        unordered_map<int, int> freq;
        vector<int> result;

        for (int num : nums) {
            freq[num]++;
        }
        for (auto& pair : freq) {
            if (pair.second > m) {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};
