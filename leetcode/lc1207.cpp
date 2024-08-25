// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//         vector<int> arr2;
//         int count=1;
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]==arr[i-1]) {
//                 count+=1;
//                 }
//             else{
//                     arr2.push_back(count);
//                     count=1;
//                 }

//         }
//         arr2.push_back(count);
//         sort(arr2.begin(),arr2.end());

//         for (int i = 1; i < arr2.size(); ++i) {
//             if (arr2[i] == arr2[i - 1]) {
//                 return false;
//             }
//         }
        
//         return true;
//     }
// };