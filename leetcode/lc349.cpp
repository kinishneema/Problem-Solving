//very bad solution

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> temp;
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         int ans = -1;
//         for (int i = 0; i < nums1.size(); i++) {
//             for (int j = 0; j < nums2.size(); j++) {
//                 if (nums1[i] == nums2[j]) {
//                     if (ans != nums1[i]) {
//                         temp.push_back(nums1[i]);
//                         ans = nums1[i];
//                     }
//                 }
//             }
//         }
//         return temp;
//     }
// }