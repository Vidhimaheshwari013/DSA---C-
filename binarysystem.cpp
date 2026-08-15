#include <iostream>
using namespace std;

// convert decimal to binary
// // getting binary number of a decimal number
// int dectoBinary(int decNum) 
// {
//     int ans = 0 ;
//     int pow = 1 ;

//     while (decNum > 0) {
//         int remainder = decNum % 2;
//         decNum /= 2;

//         ans += remainder * pow;
//         pow *= 10;
//     }
//     return ans;
// }

// int main() {
//     int decNum = 6 ;
    
//     int binaryNum = dectoBinary(decNum);    
//     cout << "Binary number: " << binaryNum << endl;
    
//     return 0;
// }


// // getting binary number from 2 to 10.
// int dectoBinary(int decNum) 
// {
//     int ans = 0 ;
//     int pow = 1 ;

//     while (decNum > 0) {
//         int remainder = decNum % 2;
//         decNum /= 2;

//         ans += remainder * pow;
//         pow *= 10;
//     }
//     return ans;
// }

// int main() 
// {
//     for (int i = 1 ; i <= 10 ; i++) 
//     {
//         cout << i<< " - " << dectoBinary(i)<< endl;
//     }
//     return 0;
// }


// binary to decimal 
int bintoDec(int num)
{
    int ans = 0 ;
    int power = 1 ; // 2^0 = 1

    while (num > 0) 
    {
        int rem = num % 10 ;
        ans += rem * power ;

        num /= 10 ;
        power *= 2 ; // 2^1 = 2, 2^2 = 4, 2^3 = 8,...
    }
    return ans ;
}

int main () 
{
    int num = 1010011 ;
    
    cout << "answer is : " << bintoDec(num) << endl ;
    return 0;
}
