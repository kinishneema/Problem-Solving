// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         for (int i = 0; i < haystack.size(); i++) {
//             int count = 0;
//             for (int j = 0; j < needle.size(); j++) {
//                 if (haystack[i] == needle[j]) {
//                     count++;
//                     if (count == needle.size()) {
//                         return i - (count - 1);
//                     }
//                     i++;
//                 } else
//                     break;
//             }
//             i -= count;
//         }
//         return -1;
//     }
// }