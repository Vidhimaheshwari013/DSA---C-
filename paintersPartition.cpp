#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// painter's partition problem using binary search
int isPossible(vector<int> arr , int n , int m , int mid) // O(n)
{ 
    int painter = 1 , time = 0 ;

    for ( int i = 0 ; i < n ; i++) {
        if (time + arr[i] <= mid){
            time += arr[i] ;            
        }

        else {
            painter++ ;
            time = arr[i] ; 
        }
    }
    if (painter > m) return false;
    return true; 
}

int painterPartition(vector<int> arr, int n , int m){
    if ( m > n) return -1; 
    
    int sum = 0 ; // O(n)
    for(int i = 0 ; i < n ; i++) {
        sum += arr[i]; 
    }
    
    int ans; 
    int st = *max_element(arr.begin(), arr.end()) ; 
    int end = sum ; 

    while (st <=end) { // O(log(range) * n)
        int mid = st + (end - st)/2 ;

        if (isPossible(arr, n, m, mid)) {
            ans = mid ;
            end = mid - 1;
        } else {
            st = mid + 1; 
        }
    }
return ans ;
}

int main () {
    vector<int> arr = {40,30,10,20} ;
    int n = 4 , m = 2 ;

    cout << painterPartition(arr,n,m) << endl ;
    return 0 ;
}