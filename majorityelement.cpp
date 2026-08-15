#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// to find the majority element. O(n^2)
// // brute force approach 
// int majorityElement(vector<int> nums , int n) {
//     for ( int val : nums) {
//         int freq = 0 ;
//         for ( int ele : nums) {
//             if ( ele == val ) {
//                 freq++ ;
//             }
//         }
//         if (freq > n/2) {
//         return val ;
//         }
//     }
// return -1 ;
// }

// int main () 
// {
//     vector<int> nums = {1,2,2,1,1} ;
//     int n = nums.size() ;

//     cout << majorityElement(nums , n) ;
// }


// // optimised approach. // TCom = O(n logn)
// int majorElement(vector<int> nums , int n) 
// {
//     // sorting the array.
//     sort(nums.begin() , nums.end()) ;

//     // frequency using loops
//     int freq = 1 ;
//     int ans = nums[0] ;

//     for (int i = 0 ; i < n ; i++) {
//         if ( nums [i] == nums[i-1]) {
//             freq++ ;
//         }

//         else {
//             freq = 1 ;
//             ans = nums[i] ;
//         }

//         if ( freq > n/2) {
//             return ans ;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {1,2,2,1,1} ;
//     int n = nums.size() ;

//     int result = majorElement(nums, n) ;

//     cout << result ;
//     return 0 ;
// }


// // most optimised way (MOORE'S VOTING ALGORITHM) // O(n)
// int majorElement(vector<int> nums , int n) 
// {
//     int freq = 0 ;
//     int ans = 0 ;

//     for ( int i = 0 ; i < n ; i++) {
//         if ( freq == 0) {
//             ans = nums[i] ;
//         }

//         if ( ans == nums[i]){
//             freq++ ;
//         }

//         else {
//             freq-- ;
//         }
//     }
//     cout << freq << endl;
//     return ans ;
// }

// int main() {
//     vector<int> nums = {1,2,2,1,1} ;
//     int n = nums.size() ;

//     int result = majorElement(nums, n) ;

//     cout << result ;
//     return 0 ;
// }