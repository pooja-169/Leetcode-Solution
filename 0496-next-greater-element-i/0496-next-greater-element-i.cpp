class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }
        vector<int> ans(nums1.size(), -1);
        vector<int> nge(nums2.size(), -1);
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i] = st.top();
            }
            st.push(nums2[i]);
        }

      
        for (int i = 0; i < nums1.size(); i++) {
            int indexInNums2 = mp[nums1[i]];
            ans[i] = nge[indexInNums2];
        }

        return ans;
    }
};
