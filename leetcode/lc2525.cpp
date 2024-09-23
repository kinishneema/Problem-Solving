// class Solution {
// public:
//     string categorizeBox(int length, int width, int height, int mass) {
//         int count=0;
//        long long int volume=(long long) length * (long long) width * (long long) height;
//         if(length>=pow(10,4) || width>=pow(10,4) || height>=pow(10,4) || volume>=pow(10,9)) count+=1;
//         if(mass>=100) count+=2;

//         if(count==3) return "Both";
//         else if(count==0) return "Neither";
//         else if(count==1) return "Bulky";
//         else return "Heavy";
//     }
// }