#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// // sort array with 0,1,2
// // brute force approach - sort function
// void sortNum(vector <int>nums){
//     sort(nums.begin(), nums.end()) ;
//     for (auto i : nums){
//         cout << i << " " ;
//     }
//     cout << endl ;
// }

// int main() {
//     vector <int> nums = {0,1,2,0,1,2,1,0,2,0} ;
//     sortNum(nums) ;
//     return 0 ;
// }


// //optimised approach 2 passes of loops
// void sortNum(vector <int>nums){
//     int n = nums.size();
//     int count0 = 0 , count1 = 0 , count2 = 0 ;

//     for ( int i = 0 ; i < n ; i++){
//         if (nums[i] == 0) count0++ ;
//         else if (nums[i] == 1) count1++ ;
//         else count2++;
//     }

//     int idx = 0 ;
//     for( int i=0 ; i < count0 ; i++) {
//         nums[idx++] = 0 ;
//     }

//     for( int i=0 ; i < count1 ; i++) {
//         nums[idx++] = 1 ;
//     }

//     for( int i=0 ; i < count2 ; i++) {
//         nums[idx++] = 2 ;
//     }

//     for (auto i : nums){
//         cout << i << " " ;
//     }
// }

// int main() {
//     vector <int> nums = {0,1,2,0,1,2,1,0,2,0} ;
//     sortNum(nums);
//     return 0 ;
// }

// most optimal approach - single pass of loop
// dutch national flag algorithm
void sortNum(vector <int>nums) {
    int low = 0 , mid = 0 , high = nums.size() - 1 ;

    while (mid <= high ) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector <int> nums = {0,1,2,0,1,2,1,0,2,0} ;
    sortNum(nums);
    for (auto i : nums){
        cout << i << " " ;
    }
    return 0 ;
}