// class Solution {
// public:
//     string removeTrailingZeros(string num) {
//         int i=num.length()-1,count=0;
//         string temp="";
//         while(i>=0){
//             if(num[i]!='0'){
//                 count=i;
//                 break;
//             }
//             else{
//                 i--;
//             }
//         }
//         for(int j=0;j<=count;j++){
//             temp.push_back(num[j]);
//         }
//         return temp;
//     }
// }