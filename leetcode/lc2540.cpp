// Example 1:

// Input: nums1 = [1,2,3], nums2 = [2,4]
// Output: 2
// Explanation: The smallest element common to both arrays is 2, so we return 2.

// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         int i=0,j=0;
//         while(i<nums1.size() && j<nums2.size()){
//             if(nums1[i]==nums2[j]){
//                 return nums1[i];
//             }
//             else if(nums1[i]>nums2[j]){
//                 j++;
//             }
//             else{
//                 i++;
//             }
//         }
//         return -1;
//     }
// }