#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// // printing a subarray // time complexity = O(N^3)
// int main () {
//     int arr[] = {1,2,3,4,5} ;
//     int n = 5 ;
    
//     for (int start = 0 ; start < n ; start++) {
//         for (int end = start ; end < n ; end++) {
//             for (int i = start ; i <= end ; i++) {
//                 cout << arr[i] ;
//             }
//             cout << " " ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }


// // printing max subarray sum using brute force approach. // time complexity = O(N^2)
// int main ()
// {
//     int arr[] = {3,5,4,-10,0,8} ;
//     int size = 6 ;

//     int maxSum = INT_MIN;

//     for (int start = 0 ; start < size ; start++) {
//         int currSum = 0 ;
//         for (int end = start ; end < size ; end++) {
//             currSum += arr[end] ;
//             maxSum = max(currSum , maxSum) ;
//         }
//     }
//     cout << "maximum sum = " << maxSum ;
// return 0 ;
// }


// kadane's algorithm // time complexity = O(N)
int main ()
{
    int arr[] = {3,-4,5,4,-1,7,-8} ;
    int size = 7 ;

    int currSum = 0;
    int maxSum = INT_MIN ;

    for (int i = 0 ; i < size ; i++){
        currSum += arr[i] ;
        maxSum = max(currSum , maxSum) ;
        
        if (currSum < 0 ) {
            currSum = 0 ;
        }
    }
    cout << maxSum ;
    return 0 ;
}
