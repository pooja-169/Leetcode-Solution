class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> m;
        vector<bool> visited(26, false);
        stack<char> st;

        for (char ch : s) {
            m[ch]++;
        }

        for (char ch : s) {
            m[ch]--;

            if (visited[ch - 'a']) continue;

            while (!st.empty() && ch < st.top() && m[st.top()] > 0) {
                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(ch);
            visited[ch - 'a'] = true;
        }

        // Build result from stack
        string res;
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};
