// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         if(ransomNote.size()>magazine.size()) return false;
//         sort(ransomNote.begin(),ransomNote.end());
//         sort(magazine.begin(),magazine.end());
//         int i=0,j=0,count=0;
//         while(i<ransomNote.size() && j<magazine.size()){
//             if(ransomNote[i]==magazine[j]){
//                 i++;
//                 j++;
//                 count++;
//             }
//             else{
//                 j++;
//             }
//         }
//         int ans=ransomNote.size();
//         if(count==ans) return true;
//         return false;
//     }
// }