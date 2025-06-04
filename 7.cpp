#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

// //1.Reverse Integer 
// int reverse(int x){
//     int ans = 0;
//     while(x){
//         int digit = x%10;
//         if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
//             return 0;
//         }
//         ans=ans*10+digit;
//         x/=10;
//     }
//     return ans;
// }

// //2.Compliment of Base 10
// int bitwiseComplement(int n){
//     if(n==0){
//         return 1;
//     }
//     int x = 1;
//     while(x<=n){
//         n = n ^ x;
//         x = x << 1;
//     }
//     return n;
// }

// //3.Power of Two
// bool isPowerOfTwo(int n){
//     ////Brute force approach
//     // for(int i = 0;i<=30;i++){
//     //     int ans = pow(2,i);
//     //     if(ans==n){
//     //         return true;
//     //     }
//     // }
//     // return false;

//     //Improved brute force
//     int temp=1;
//     while(n!=temp && temp < INT_MAX/2){
//         temp*=2;
//     }
//     return n == temp;
// }


int main(){
    // //1.Reverse Integer 
    // int y = 123;
    // int z = reverse(y);
    // cout<<z<<endl;

    // //2.Compliment of Base 10
    // int y = 5;
    // int z = bitwiseComplement(y);
    // cout<<z<<endl;

    // //3.Power of Two
    // int y = 65;
    // cout<<isPowerOfTwo(y)<<endl;
    





    return 0;
}