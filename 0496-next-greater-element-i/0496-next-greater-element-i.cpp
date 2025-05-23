class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
       int n=nums1.size();
       int m=nums2.size();
        for (int i = 0; i <n; i++) {
            int num = nums1[i];
            int pos = -1;

            for (int j = 0; j < m; j++) {
                if (nums2[j] == num) {
                    pos = j;
                    break;
                }
            }
            int v1 = -1;
            for (int k = pos + 1; k < m; k++) {
                if (nums2[k] > num) {
                    v1 = nums2[k];
                    break;
                }
            }

            v.push_back(v1);
        }

        return v;
    }
};
