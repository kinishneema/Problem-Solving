// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         vector<int> front,back;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<pivot){
//                 front.push_back(nums[i]);
//             }
//             else{
//                 back.push_back(nums[i]);
//             }
//         }
//         int i=0;
//         int j=0;
//         while(i<front.size()){
//             ans.push_back(front[i]);
//             i++;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==pivot){
//                 ans.push_back(nums[i]);
//             }
//         }
//         while(j<back.size()){
//             if( back[j]!=pivot){
//                ans.push_back(back[j]);
//                j++;
//             }
//             else{
//                  j++;
//             }
            
//         }
        

//         return ans;
//     }
// };