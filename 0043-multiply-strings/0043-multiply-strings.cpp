class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if (num1 == "0" || num2 == "0") return "0";

        vector<int> ans(n + m, 0);

        for (int j = m - 1; j >= 0; j--) {
            int c = 0, k = n + m - 1 - (m - j - 1);
            for (int i = n - 1; i >= 0; i--) {
                int temp = (num1[i] - '0') * (num2[j] - '0') + c + ans[k];
                ans[k] = temp % 10;
                c = temp / 10;
                k--;
            }
            while (c > 0) {
                int temp = c + ans[k];
                ans[k] = temp % 10;
                c = temp / 10;
                k--;
            }
        }
        int i = 0;
        while (i < ans.size() && ans[i] == 0) i++;

        string result = "";
        for (; i < ans.size(); i++) {
            result += to_string(ans[i]);
        }

        return result.empty() ? "0" : result;
    }
};
