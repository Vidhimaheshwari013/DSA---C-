#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// binary eponentiation
// double myPow(double x, int n) {
//        if ( n == 0) return 1.0 ;
//        if ( x == 0) return 0.0 ;
//        if ( x == 1) return 1.0 ;
//        if ( x == -1 && n%2 == 0) return 1.0 ;
//        if ( x == -1 && n%2 != 0) return -1.0 ;  
       
//        long binForm = n;
//         if (n < 0) {
//             x = 1/x ;
//             binForm = -binForm ;
//         }

//         double ans = 1 ;
//         while ( binForm > 0) {
//             if (binForm %2 == 1){
//                 ans *= x;
//             }

//             x *=x ;
//             binForm /= 2 ;

//         }
//         return ans ;
//     }

//     int main () {
//         double x = 2 ;
//         int n = 3 ;

//         cout << x << " " << "to the power " << n << " = " << myPow (x,n) ;
//         return 0 ;
//     }


// // stock buy and sell
int maxProfit(vector<int>& prices) {
        int maxProfit = 0 , bestBuy = prices[0] ;

        for ( int i = 1 ; i < prices.size(); i++) {
            if ( prices[i] > bestBuy) {
                maxProfit = max (maxProfit , prices[i]- bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]) ;
        }
        return maxProfit ;
}

int main () {
    vector<int> prices = {7,1,5,3,6,4} ;

   cout <<  maxProfit(prices) ;
}

