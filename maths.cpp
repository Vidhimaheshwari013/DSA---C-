#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// prime no.s 
// a single number
// string primeNum(int n) {
//     if (n <= 1) return "non prime";
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return "non prime";
//     }
//     return "prime";
// }

// range of numbers
void primeRange(int n , int m) {
    for (int i = n ; i <=m ; i++){
        if (i < 2 ) continue;

        bool isPrime = true ;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0){
                isPrime = false ;
                break ;
            }
        }
    if (isPrime){    
    cout << i << " ";
    }
}
    cout << endl ;
}

int main (){
    int n = 2 ;
    int m = 7 ;
    primeRange(n, m);
    return 0;
}