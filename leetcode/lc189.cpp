// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp;
//         k=k%nums.size();
//         int ans=nums.size()-k;
//         for(int i=ans;i<nums.size();i++){
//             temp.push_back(nums[i]);
//         }
//         for(int i=0;i<ans;i++){
//             temp.push_back(nums[i]);
//         }
//         nums=temp;
//     }
// }