#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// Container with most water 
// brute force approach
// int maxArea(vector<int>& height) {
//         int maxWater = 0 ;

//         for (int i = 0 ; i < height.size() ; i++) {
//             for ( int j = i + 1 ; j < height.size() ; j++) {
//                 int width = j - i;
//                 int ht = min(height[i], height[j]);
//                 int area = width * ht ;
//                 maxWater = max (area , maxWater) ;
//             }
//         }
//     return maxWater ;
// }

// int main () {
//     vector<int> height = {1,8,6,2,5,4,8,3,7} ;
//     cout << maxArea(height) ;
// }


// optimal approach
int maxArea(vector<int>& height) {
        int maxWater = 0 ;
        int left = 0 ;
        int right = height.size() -1 ;

        while (left < right) {
            int w = right - left ;
            int ht = min(height[left] , height[right]) ;

            int area = w * ht ;
            maxWater = max(maxWater , area) ;

            height[left] < height[right]? left++ : right-- ;
        }
    return maxWater ;  
}

int main () {
    vector<int> height = {1,8,6,2,5,4,8,3,7} ;
    cout << maxArea(height) ;
}

