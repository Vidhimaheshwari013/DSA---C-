#include <iostream>
using namespace std;

// // bitwise operators
// // bitwise AND (&)
// int main() {
//     int a = 4 , b = 8 ;

//     cout << (a & b) << endl; 
//     return 0 ;
// }

// // bitwise XOR (^)
// int main() {
//     int a = 4 , b = 8 ;

//     cout << (a ^ b) << endl; 
//     return 0 ;
// }


// // bitwise left shift (<<)
// int main() {
//     int n = 4 ;
//     int m = 10 ;

//     cout << "n = " << (n << 1) << endl; 
//     cout << "m = " << (m << 2) << endl;

//     return 0 ;
// }


// // bitwise right shift (>>)
// int main() {
//     int n = 8 ;
//     int m = 10 ;

//     cout << "n = " << (n >> 2) << endl; 
//     cout << "m = " << (m >> 1) << endl;

//     return 0 ;
// }


// // solve the following .
// int main () {
    
//     cout << "6 & 10 = " << (6 & 10) << endl;
//     cout << "6 | 10 = " << (6 | 10) << endl;
//     cout << "6 ^ 10 = " << (6 ^ 10) << endl;

//     cout << "10 << 2 = " << (10 << 2) << endl;

    
//     return 0 ;
// }


// // OPERATOR PRECEDENCE
// int main() 
// {
//     cout << "(5 - 2*6) = " << (5 - 2 * 6) << endl;
//     cout << "(5 - 2) * 6 = " << (5 - 2) * 6 << endl;

//     cout << "(4 * 5 % 2) = " << (4 * 5 % 2) << endl;
// }


// // how to find if a number is power of 2 using bitwise operators.
// bool isPowerOfTwo(int n) {
//     if (n <= 0) return false;

//     // Keep right shifting until n becomes 1
//     while (n > 1) {
//         // If the number is odd (last bit is 1), it's not a power of 2
//         if (n & 1) return false;

//         // Right shift by 1 (divide by 2)
//         n = n >> 1;
//     }

//     return true;  // If we reached 1, it was a power of 2
// }

// int main() {
//     int n = 34 ;  // You can change this to test other numbers

//     if (isPowerOfTwo(n)) {
//         cout << n << " is a power of 2." << endl;
//     } else {
//         cout << n << " is not a power of 2." << endl;
//     }

//     return 0;
// }


// // reverse a number.
// int reverse(int n)
// {
//     int rev = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         rev = rev * 10 + rem; // build the reversed number
//         n = n / 10;
//     }
//     return rev;
// }

// int main()
// {
//     cout << reverse(125) << endl;  // Output: 521
//     return 0;
// }
