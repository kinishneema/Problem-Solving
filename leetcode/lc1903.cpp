// class Solution {
// public:
//     string largestOddNumber(string num) {
//         string temp="";
//         int i=num.length()-1;
//         if(num[i]%2!=0){
//                 return num;
//             }
//         while(i>=0){
//             if(num[i]%2==0){
//                i--;
//             }
//             else{
//                 for(int j=0;j<=i;j++){
//                     temp.push_back(num[j]);
//                 }
//                 return temp;
//             }
//         }
//         return "";
//     }
// }