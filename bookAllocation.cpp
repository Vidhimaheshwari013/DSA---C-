#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// book allocation problem
// This problem is about allocating books to students such that the maximum number of pages assigned to a student is minimized.

int isValid(vector<int> arr , int n , int m , int mid){ // O(n)
    int stu = 1 , pages = 0 ;

    for ( int i = 0 ; i < n ; i++) {
        if(arr[i] > mid) return false; // If a book has more pages than the allowed maximum, it's not valid.
        if (pages + arr[i] <= mid){
            pages += arr[i] ;            
        }

        else {
            stu++ ;
            pages = arr[i] ; 
        }
    }
    if (stu > m) return false; // If the number of students exceeds m, it's not valid.
    return true; // If we can allocate books within the constraints, it's valid.
}

int allocateBooks(vector<int> arr, int n , int m){
    if ( m > n) return -1; // If there are more students than books, allocation is not possible.
    
    int sum = 0 ; // O(n)
    for(int i = 0 ; i < n ; i++) {
        sum += arr[i]; // Calculate the total number of pages.
    }
    
    int ans = -1 ; // -1 indicates no valid allocation found yet.
    int st = *max_element(arr.begin(), arr.end()) ; // optimization: start from the maximum pages in a single book.
    int end = sum ; //
    cout << "st = " << st << endl; 

    while (st <=end) { // O(logN * n)
        int mid = st + (end - st)/2 ;

        if (isValid(arr, n, m, mid)) {
            ans = mid ;
            end = mid - 1; // If valid, try to minimize the maximum pages.
        } else {
            st = mid + 1; // If not valid, increase the allowed maximum pages.
        }
    }
return ans ;
}

int main () {
    vector<int> arr = {15, 17, 20} ;
    int n = 3 , m = 2 ;

    cout << allocateBooks(arr,n,m) << endl ;
    return 0 ;
}