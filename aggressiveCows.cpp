#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// aggressive cows problem
// This problem is about placing cows in stalls such that the minimum distance between any two cows is maximized.
bool isPossible(vector<int> arr , int n , int c , int mid){
    int cows = 1 , laststallPos = arr[0] ;

    for ( int i = 0 ; i < n ; i++) {
        if((arr[i]-laststallPos) >= mid) {
            laststallPos = arr[i] ;
            cows++ ;
        }
        if (cows == c) return true ;
    }
    return false; 
}

int Cows(vector<int> arr, int n , int c){
    sort(arr.begin(), arr.end());     
    int ans = -1 ; 
    int st = 1 ;
    int end = arr[n-1] - arr[0] ;

    while (st <=end) { 
        int mid = st + (end - st)/2 ;

        if (isPossible(arr, n, c, mid)) {
            ans = mid ; 
            st = mid + 1;
        } 
        else {
            end = mid - 1; 
        }
    }
return ans ;
}

int main () {
    vector<int> arr = {1,2,8,4,9} ;
    int n = 5 , c = 3 ;

    cout << Cows(arr,n,c) << endl ;
    return 0 ;
}