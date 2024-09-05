// class Solution {
// public:
//     int countSegments(string s) {
//        int count=0;
//        bool ans=false;
//        for(int i=0;i<s.size();i++){
//         if(s[i]!=' '){
//             if(!ans){
//                 ans=true;
//                 count++;
//             }
//         }
//         else{
//             ans=false;
//         }
//        } 
//        return count;
//     }
// }