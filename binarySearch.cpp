#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// binary search
int binSearch(vector<int> arr, int target){
    int st = 0 ;
    int end =arr.size()- 1;

    while(st<=end) {
       int mid = (st+end) / 2 ;
       // int mid = st + (end - st)/2 ; // optimised way to calculate mid to get rid of overflowing due to large values.

       if(target > arr[mid]){
        st = mid + 1 ;
       }

       else if (target < arr[mid]) {
        end = mid-1 ;
       }

       else {
        return mid ;
       }

    }
    return -1 ;
}

int main (){
    vector<int> arr= {-1,0,3,4,9,12}; 
    int target = 1 ;

    cout << binSearch(arr, target) << endl ;

    return 0 ;
}


// // rotated sorted array 
// // modified form of binary search 
// int binSearch(vector<int> arr, int target) {
//     int st = 0 ;
//     int end = arr.size() - 1 ;

//     while (st <= end) {
//         int mid = st + (end-st)/2 ;

//         if(arr[mid] == target) {
//             return mid ;
//         }

//         if (arr[st] <= arr[mid]) {
//             if ( arr[st] <= target && target <= arr[mid]){
//                 end = mid-1 ;
//             }

//             else {
//                 st = mid + 1 ;
//             }
//         }

//         else {
//             if (arr[mid] <= target && target <= arr[end]){
//                 st = mid+1 ;
//             }

//             else {
//                 end = mid-1 ;
//             }
//         }
    
//     }
//     return -1 ;
// }

// int main (){
//     vector<int> arr = {3,4,5,6,7,0,1,2} ;
//     int target = 6 ;

//     cout << binSearch(arr, target) << endl;
//     return 0 ;
// }

