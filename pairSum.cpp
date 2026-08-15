#include <iostream>
#include <vector>
using namespace std;

// return index value of pair in sorted array with targeted sum. 
// brute force approach. TCom = O(N^2)
// vector<int> pairSum(vector<int> vec , int target)
// {
//     vector<int> ans ;
//     int n = vec.size() ;
    
//     for (int i = 0 ; i < n ; i++) 
//     {
//         for (int j = i+1 ; j< n ; j++) 
//         {
//             if(vec[i]+vec[j] == target)
//             {
//             ans.push_back(i) ;
//             ans.push_back(j) ;
//             return ans ;
//            }
//        }
//    }
// }

// int main() 
// {
//     vector<int> vec = {2,7,11,15} ;
//     int target = 9 ;

//     vector<int> result = pairSum(vec, target);
//     cout << result[0] << " " << result[1] ;
//     cout << endl;
//     return 0 ;
// }


// optimised approach -- O(N)
vector<int> pairSum(vector<int> vec , int target)
{
    vector<int> ans ;
    int n = vec.size() ;
    
    int i = 0 ;
    int j = n-1 ;

    while ( i < j ) 
    {
        int pairSum = vec[i] + vec[j] ;
        
        if (pairSum > target) {
            j-- ;
        }

        else if ( pairSum < target) {
            i++ ;
        }

        else {
            //ans.push_back(i);
            //ans.push_back(j);
            ans.push_back(vec[i]); // actual value
            ans.push_back(vec[j]); // actual value

            return ans ;
        }
    }
}

int main() 
{
    vector<int> vec = {2,7,11,15} ;
    int target = 26 ;

    vector<int> result = pairSum(vec, target);
    cout << result[0] << " " << result[1] ;
    cout << endl;
    return 0 ;
}
