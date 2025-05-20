class Solution {
public:
    int compress(vector<char>& s) {
        int n=s.size(); int idx=0;
        for(int i=0;i<n;i++){
            int count = 0;
            char ch = s[i];
            while(i<n&&s[i]==ch){
                count++; i++;
            }

            s[idx++]=ch;
            if(count>1){
                string str = to_string(count);
                for(char dig : str){
                    s[idx++]=dig;
                }
                
            }
            i--;
        }
        return idx;
    }
};