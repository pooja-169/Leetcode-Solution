class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> v;
       int n=nums.size();
       if(n==0) return;
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            v.push_back(nums[i]);
        }
       }      
       int m=v.size();
       for(int i=m;i<n;i++){
        v.push_back(0);
       }
       nums=v;
    
    }
};