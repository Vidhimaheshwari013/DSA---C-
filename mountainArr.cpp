#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// peak index in a mountain array
// brute force approach ... linaer search
// int peakIndex(vector<int> arr){
//     for ( int i = 0 ; i < arr.size(); i++) {
//         if ( arr[i-1] < arr[i] && arr[i] > arr[i+1]) {
//                 return i ;
//             }
//         }
// return -1 ;
// } 

// int main () {
//     vector<int> arr = {0,3,8,9,5,2} ;
//     cout << peakIndex(arr) << endl ;

//     return 0 ;
// }


// optimised approach ... // binary search
int peakIndex(vector<int> arr) {
    int st = 0 , end = arr.size() - 1 ;

    while ( st <= end) {
    int mid = st + (end - st) / 2;
    
    if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
        return mid ;
    }

    if(arr[mid-1] < arr[mid]){
        st = mid + 1 ;
    }
    else {
        end = mid - 1 ;
    }
   }
}

int main () {
    vector<int> arr = {0,3,8,9,5,2} ;
    cout << peakIndex(arr) << endl ;

    return 0 ;
}