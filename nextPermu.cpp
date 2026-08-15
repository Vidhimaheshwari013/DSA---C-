#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find the next permutation of a given sequence in lexicographical order
void nextPermutation(vector<int>&nums) {
    int n = nums.size() ;
    // find the pivot.
    int pivot = -1 ;
    
    for (int i = n-1 ; i >=0 ; i--) {
        if (nums[i] < nums[i+1]) {
            pivot = i ;
            break;
        }
    }

    if (pivot == -1) {
        reverse(nums.begin() , nums.end()); // in place reverse
        return ;
    }
// next step is to find the just greater element than pivot and swap them
    for (int i = n-1 ; i > pivot ; i--) {
        if (nums[i] > nums[pivot]){
            swap(nums[i] , nums[pivot]) ;
        }
    }

    // finally reverse the right part of the pivot
    reverse(nums.begin() + pivot + 1 , nums.end()) ;
}

int main () {
    vector<int> nums = {1,2,3,5,4} ;
    nextPermutation(nums) ;
    for (auto x : nums) {
        cout << x << " " ;
    }
    return 0 ;
}