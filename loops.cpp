// if-else statements 
# include <iostream>
using namespace std;

// int main() {
//     int n = 30;

//     if (n>=0){
//         cout << "The number is positive." << endl;
//     } else {
//         cout << "The number is negative." << endl;
//     }

//     return 0;
// }


// // Ques. to check if a person can vote or not
// int main() 
// {
//     int age;
//     cout << "enter the age : " ;
//     cin >> age;

//     if (age>=18) {
//         cout << "you can vote" << endl;
//     } else {
//         cout << "you cannot vote" << endl;      
//     }
//     return 0;

// }


// // Ques. to check if a number is even or odd
// int main() {
//     int number;
//     cout << "enter the number : ";
//     cin >> number;

//     if(number % 2 ==0) {
//         cout << "The number is even." << endl;
//     } else {
//         cout << "The number is odd." << endl;
//     }
//     return 0;

// }


// // Ques. to find the grades of a student based on marks
// int main() 
// {
//     int marks;

//     cout << "enter the marks : ";
//     cin >> marks ;

//     if (marks >=90){
//         cout << 'A' ;
//     }
//     else if (marks >=80 && marks <90) {
//         cout << 'B' ;
//     }
//     else if (marks >=70 && marks <80) {
//         cout << 'C' ;
//     }
//     else if (marks >=60 && marks <70) {
//         cout << 'D' ;
//     }
//     else if (marks >=50 && marks <60) {
//         cout << 'E' ;
//     }
//     else {
//         cout << 'F' ;
//     }
//     return 0;

// }


// // QUes. to check if it a lowercase or uppercase letter
// int main() {
//     char letter;

//     cout << "enter the letter : " ;
//     cin >> letter;

//     if(letter >= 'a' && letter <= 'z') {
//         cout << "lowercase letter" ;

//     } else 
//         cout << "uppercase letter" ;

//     return 0;
// }


// // ques. using ternary statements
// int main()
// {
//     int n = -45 ;
    
//     cout << ((n >= 0) ? "positive" : "negative") << endl;
//     return 0;

// }


// // while loop
// int main(){

//     int count = 1;

//     while (count <=10 ) {
//         cout << count << " " ;
//         count++ ;

//     }
//     return 0;
// }


// // for loop
// int main() {

//     int n = 20;

//     for (int i = 1 ; i<=n ; i++) {
//         cout << i << " ";           
//     }
//     return 0;
// }


// ques. calculate sum of n numbers.
//  int main() {
//     int n ;
//     int sum ;
//     int i ;

//     cout << "enter the value for n : " ;
//     cin >> n;
// // while loop
//     i =1;
//     sum = 0;
//     while (i<=n) {
//         sum+= i;
//         i++;
//     }
//     cout << "sum :" << sum << endl;
//     return 0;

// // for loop
//     sum = 0;
//     for (i = 1 ; i<=n ; sum +=i, i++) {
//         if(i==6) {
//             break;
//         }
//         }   
//     cout << "sum : " << sum << endl;
    
//     return 0;
//  }


// // ques. sum of odd numbers from 1 to n
// int main(){
//     int n;
//     int sum ;

//     cout << "enter the value for n: ";
//     cin >> n;

//     sum = 0 ;
//     for (int i=1 ; i<=n; sum+= i, i+=2){

//         cout << i << " " << endl;

//     }
//     cout << "sum of " << n << " odd no.s is : " << sum ;
    
// return 0;
// }

// // from while loop 
// int main() {

//     int n;
//     int sum;

//     cout << "enter the value for n : ";
//     cin >> n;

//     int i = 0;
//     sum = 0 ;

//     while (i<=n) {
//         sum += i;
//         i += 2;
//         cout << i << " " ;
//     }
//     cout << "sum = " << sum ;
//     return 0;
// }


// // do while loop
// int main() {
//     do {
//         cout << "Hello world" << endl;

//     } while (3>5);
//     return 0;

// }


// int main() {
//     int n = 10;
//     int i =1 ;

//     do {
//         cout << i << " ";
//         i++;
//     } while (i<=n); 
//     return 0;
// }


// // ques. check if a number is prime or not
// int main (){
//     int n;
//     int i;

//     cout << "enter the number : " ;
//     cin >> n;

//     i = 2;
//     while (i<= n-1) {
//         if (n%i ==0){
//             cout << n << " is not a prime number." << endl;
//             return 0; // Exit the program if a divisor is found
        
//         }
//         else {
//             i++;
//         }
//     }
//     cout << n << " is a prime number." << endl;
        
//     return 0;
//     }


// ques. to find the sum of n numbers divisible by 3.
// int main() {
//     int n;
//     int sum ;

//     cout << "enter the value for n : ";
//     cin >> n;

//     sum = 0;
//     for(int i=1 ; i<=n ; i++) {
//         if ( i%3 == 0) {
//             sum += i; 
//             cout << i << " " << endl;
//         }
//     }
//     cout << "sum of numbers divisible by 3 from 1 to " << n << " is : " << sum << endl;
//     return 0;
// }


// // ques. to find the factorial of a number
// int main() {
//     int n;

//     cout << "enter the value of n : ";
//     cin >> n;

//     int fact =1 ;
//     for (int i= 1; i<=n ; i++) {
//         fact *= i;

//     }
//     cout << "factorial of " << n << " is : " << fact << endl;
//     return 0;
// }


// break and continue statements
// ques. a girl only goes out only on odd days. she gets pocket money of 3000 and spends 300 each day. shw will stop going out when she runs out of money.print the days she goes out.
int main () {
    int pocketMoney = 3000 ;
    for ( int i = 1 ; i <= 30 ; i++) {

        if (i % 2 == 0) {
            continue ;
        }

        if (pocketMoney == 0) {
            cout << "out of money" << endl;
            break ;
        }

        cout << i << ":" <<  "go out today" << endl ; 
        pocketMoney -= 300 ;
    }
}

