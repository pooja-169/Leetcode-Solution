class Solution {
public:
    int countSubstrings(string s) {
        // CenterExpand approach.or mirror
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            // single character as palindrome(ith)
        int left=i-1;
        int right=i+1;
        int count=1;
        while(left>=0 && right<n && s[left--]==s[right++]) count++;
        ans+=count;
        count=0;
        // ith and i+1th character as string.
        left=i;right=i+1;
        // if(i+1<n && s[i]==s[i+1]) count++;
        while(left>=0 && right<n && s[left--]==s[right++]) count++;
        ans+=count;

        }
    return ans;
    }
};