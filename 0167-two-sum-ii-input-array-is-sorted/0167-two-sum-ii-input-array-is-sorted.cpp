// 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; 
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i]+numbers[j]==target){
//                     v.push_back(i+1);
//                     v.push_back(j+1);
//                 }
//             }
//         }
//         return v;
//     }
// };