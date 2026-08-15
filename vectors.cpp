#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// // vector creation
// int main() {
//     // vector <int> vec ; // size = 0

//     // vector<int> vec = {1,2,3} ; // size = 3

//     vector<int> vec(3,0) ; // size = 3 , value = 0 at every index

//     cout << vec[0] ;
//     cout << vec[1] ;
//     cout << vec[2] ; 
//     return 0 ;
// }


// // loops on vectors
// int main() {
//     vector <char> vec = {'a','b','c','d','e'} ;

//     for (char i : vec)  {
//         cout << i << endl ;
//     }
// return 0 ;
// }


// // vector operations
// int main() {
//     vector<int> vec ; // size = 0 

//     vec.push_back(25) ;
//     vec.push_back(35) ;
//     vec.push_back(45) ;
//     vec.push_back(55) ;

//     cout << "size after push back = " << vec.size() << endl ; // size = 4

//     vec.pop_back() ; 

//     for (int i : vec)  {
//         cout << i << endl ;
//     }

//     cout << "front val = " << vec.front() << endl;
//     cout << "back val = " << vec.back() << endl;

//     cout << "value at index 1 = " << vec.at(0) << endl; 
// return 0 ;
// }


// // allocation
// int main() {
//     vector <int> vec ;

//     vec.push_back(0) ;
//     vec.push_back(1) ;
//     vec.push_back(2) ;
//     vec.push_back(3) ;
//     vec.push_back(4) ;


//     cout << "size = " << vec.size() << endl ;
//     cout << "capacity = " << vec.capacity() << endl; 

// }


// // finding a unique numbers from array of duplicate numbers. // leetcode prblm : 136 (single number)
// int singleNumber(vector<int>& nums) {
//         int ans = 0;

//         for (int val : nums) {
//             ans ^= val ;
//         }
//         return ans ;
//     }
// int main () {
//     vector<int> nums = {4,1,2,1,2} ;

//     cout << singleNumber(nums) << endl;
//     return 0 ;
// }


// // linear search 
// // find a num from the vector nums if not found print -1.
// int findnum(vector<int> nums, int x)
// {
//     for (int i : nums) {
//         if (i == x){
//         cout << "number found" << endl ;
//         }
//     }
//     cout << "-1";
// }

// int main()
// {
//     vector<int> nums = {3,5,6,3,7,5,8,1} ;
//     int x = 2 ;

//     findnum(nums, x) ;
//     return 0 ;
// }


// // reverse a vector. 
// int reverseVec(vector <int> &vec)
// {
//     int n = vec.size() ;
//     for (int i = 0 ; i < n/2 ; i++) {
//         swap(vec[i], vec[n-i-1]) ;
//     }

// }

// int main () {
//     vector <int> vec = {3,5,7,4,8,5} ;

//     reverseVec(vec) ;

//     cout << "Reversed vector : " ;
//     for (int val : vec) {
//         cout << val << " " ;
//     }
//     return 0 ;
// }

// vector functions
int main () {
    vector <int> vec = {1,2,3,4,5} ;

    // erase function
    //deleting the 1st element.
    // vec.erase(vec.begin()) ; // 1 will be removed

    // deleting the ith element.
    // vec.erase(vec.begin() + 2) ; // 3 will be removed

    // deleting the range of elements.
    //vec.erase(vec.begin() + 1, vec.begin() + 3) ; // 2,3 will be removed (end value not included)

    // insert function
    // vec.insert(vec.begin(), 10) ; // 10 will be inserted at the beginning.
    // vec.insert(vec.begin() + 2, 20) ; // 20 will be inserted at index 2.

    // clear function
    // vec.clear() ; // all elements will be removed. size = 0
    // cout << "size = " << vec.size() << endl ;
    // cout << "capacity = " << vec.capacity() << endl ;

    // cout << vec.empty() << endl ; // 1 if vector is empty else 0

    // for (int val : vec) {
    //     cout << val << " " ;    
    // }

    // iterators
    cout << *(vec.begin()) << endl ;
    cout << *(vec.end()) << endl ;

    return 0 ;
}
