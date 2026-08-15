#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// 
bool powThree(int n) {
    if (n <=0 ) return false ; // 0

    while (n > 1) {
        if ( n % 3 !=0) return false ; // 0
        n = n/3 ;
    }
    return true ; // 1
}

int main (){
    int n = 3 ;

    cout << powThree(n) << endl; 
    return 0 ;
}
