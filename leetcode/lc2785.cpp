// class Solution {
// public:
// bool check(char c){
//             if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
//             else return 0;
//         }
//     string sortVowels(string s) {
//         string vowels="";
//         for(int i=0;i<s.size();i++){
//             if(check(s[i])){
//                vowels.push_back(s[i]);
//             }
//         }
//         sort(vowels.begin(),vowels.end());
//         int k=0;
//         for(int i=0;i<s.size();i++){
//             if(check(s[i])){
//                 while(k<vowels.size()){
//                    s[i]=vowels[k];
//                    k++;
//                    break;
//                 }
//             }
//         }
//         return s;

//     }
// }