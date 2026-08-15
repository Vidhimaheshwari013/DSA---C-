#include <iostream>
using namespace std;

// // function definition
// int printHello () {
//     cout << "Hello!" << endl;

//     return 3;
// }

// int main () {
//     // // function calling / invoke
//     // int val = printHello() ;
//     // cout << "The value returned is: " << val << endl;
//     // // OR
//     cout << "The value returned is: " << printHello() << endl;
//     return 0;
// }


// // ques. operators on two numbers 
// // sum
// int sum(int a,int b) {
//     int s = a + b ;
//     return s;
// }

// int main() {
//     int y = sum(10,5) ;
//     cout << "The sum is: " << y << endl;
//     return 0 ;
// }


// // min of two numbers
// int min(int a, int b) { // parameters
//     if (a < b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int main() {
//     int y = min(10,5) ; // arguments ....function calling
//     cout << "The min is: " << y << endl;
//     return 0 ;
// }


// // sum of n numbers
// int sum(int n) 
// {
//     int s = 0 ;
//     for (int i = 0 ; i <=n ; i++)
//     {
//         s += i ;
//     }
// return s;
// }

// int main () {
//     cout << sum(5) << endl;
// }


// // n factorial
// int fact(int n)
// {
//     int f = 1 ;
//     for (int i = 1 ; i<= n ; i++)
//     {
//         f = f*i ;
//     }
//     return f;
// }

// int main() {
//     cout << fact(5) << endl ;
// }


// // pass by value
// int sum (int a , int b) {
//     a = a +  10 ; // a = 15
//     b = b + 10 ; // b = 14
//     return a+b ; // 29
// }

// int main () {
//     int a = 5 , b = 4 ;
//     cout << sum(a , b) << endl ;
    
//     cout << a << endl ; // a = 5
//     cout << b << endl ; // b = 4
//     // a and b are not changed in main function
//     return 0 ;
// }


// // 
// void changeX(int x) {
//     x = 2*x ;
//     cout << "x = " << x << endl ; // x = 10
// }

// int main() {
//     int x = 5 ;
//     changeX(x) ;

//     cout << "x = " << x << endl ; // x = 5
//     return 0 ;
// }


// // calculate sum of digits of a number 
// int sum(int num) {
//     int count = 0 ;
//     int lastdigit = 0 ;

//     while (num > 0) {
//         lastdigit = num % 10 ;
//         cout << "lastdigit = " << lastdigit << endl ;
        
//         count += lastdigit ; // count = count + lastdigit
        
//         num = num / 10 ; // remove last digit  
//         cout << "num = " << num << endl ; 
//     }
//     return count ;
// }

// int main () {
//     cout << "The sum of digits is: " << sum(125) << endl ;
//     return 0 ;
// }


// // calculate binomial coefficient C(n, r) = n! / (r! * (n - r)!)
// int factorial(int n) {
//     int fact = 1 ;

//     for(int i = 1 ; i <=n ; i++) {
//         fact = fact* i ;
//     }
//     return fact;   
// }

// int binomial(int n , int r) {
//     int fact_n = factorial(n) ;
//     int fact_r = factorial(r) ;
//     int fact_n_r = factorial(n - r) ;

//     int binomial_coefficient = fact_n / (fact_r * fact_n_r) ;

//     return binomial_coefficient;

// }

// int main () {
//     int n = 8 , r = 2 ;
//     binomial(n,r) ;
//     cout << "The binomial coefficient is: " << binomial(n, r) << endl ;
//     return 0 ;
// }


// // to check if a number is prime or not
// bool isPrime(int n) {
//     for(int i = 2 ; i <= n-1 ; i++)
//     {
//         if(n%i == 0){
//             return false; // not prime
//         }
//     }
//             return true; // prime
//     }


// int main() {
//     int n = 74 ;
    
//     if(isPrime(n)) {
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }
// return 0 ;
// }


// // to print all prime numbers from 1 to n .
// void printPrime(int n) {
//     for(int i = 2 ; i <= n ; i++) {
//         bool is_prime = true; // assume the number is prime
//         for(int j = 2 ; j <= i-1 ; j++) {
//             if(i % j == 0) {
//                 is_prime = false; // not prime
//                 break; // exit the loop
//             }
//         }
//         if(is_prime) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n = 20;
//     cout << "Prime numbers from 1 to " << n << " are: ";
//     printPrime(n);
//     return 0;
// }


// // print nth fibonacci number
// void fibonacciSeries(int n) {
//     int a = 0, b = 1, next;

//     cout << "Fibonacci Series up to " << n << " terms:\n";

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";
//         next = a + b;
//         a = b;
//         b = next; 
//     }
//     cout << endl;
//     cout << "next = " << next << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }

// int main() {
//     int n;
//     fibonacciSeries(5);

//     return 0;
// }
