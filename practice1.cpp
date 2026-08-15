// basic data types, type conversion, and arithmetic operations
# include <iostream>
using namespace std;

// int main() {
//     int age = 25;
//     char grade = 'A';

//     float PI = 3.14f; 
//     // capital PI refers to a constant value in C++

//     bool T = true;
//     bool F = false ;
//     // bool true is 1 and false is 0

//     double price = 100.99;
//     // double is used for decimal values with more precision
    
//     cout << age << endl << grade << endl << PI << endl << T << endl << F << endl << price << endl; 
//     return 0;

// }


// int main() {
//     int age = 25;
//     cout << sizeof(age) << endl;
//     return 0;

// }  // gives the size of the variable age in bytes


// int main() {
//     char grade = 'A';

//     int value = grade; // Implicit conversion from char to int
//     cout << value << endl; // converts the character 'A' to its ASCII value, which is 65
    
//     return 0;            
// } // This program demonstrates implicit type conversion in C++


// int main() {
//     double price = 100.99; 

//     int newprice = (int)price; // explicit conversion from double to int
    
//     cout << newprice << endl; // converts the double value 100.99 to an integer, which results in 100
    
//     return 0;            
// } // This program demonstrates explicit type conversion in C++


// int main()
// {
//     double price; 
//     cout << "enter the desired prize for the ride : " ;
//     cin >> price ;

//     cout << "your cab is ready for this price : " << price  << endl;

//     return 0;
// }


// int main()
// {
//     int a = 10;
//     int b = 5;

//     int sum = a + b; // calculates the sum of a and b
//     cout << "The sum of " << a << " and " << b << " is: " << sum << endl; 

//     int difference = a - b; // calculates the difference of a and b
//     cout << "The difference of " << a << " and " << b << " is: " << difference << endl;   

//     int product = a * b; // calculates the product of a and b
//     cout << "The product of " << a << " and " << b << " is: " << product << endl;

//     int divide = a / b; // calculates the division of a by b
//     cout << "The division of " << a << " by " << b << " is: " << divide << endl;

//     int modulo = a % b; // calculates the remainder of a divided by b
//     cout << "The modulo of " << a << " and " << b << " is: " << modulo << endl;

//     return 0;
// }


// int main()
// {
//     int a = 10;
//     double b = 3;

//     cout << (a/b) << endl;
//     cout << (5/(double)2)  << endl; // typecatsing is used 
//     return 0;
// }


// int main()
// {
//     cout << (3<5) << endl;            // prints 1 (true) because 3 is less than 5
//     cout << (3>5) << endl;            // prints 0 (false) because 3 is not greater than 5
//     cout << (3<=5) << endl;           // prints 1 (true) because 3 is less than or equal to 5
//     cout << (3>=5) << endl;           // prints 0 (false) because 3 is not greater than or equal to 5
//     cout << (3==5) << endl;           // prints 0 (false) because 3 is not equal to 5
//     cout << (3!=5) << endl;           // prints 1 (true) because 3 is not equal to 5
    
//     return 0 ;
// }


// int main()
// {
//     cout << !(3 > 1) << endl;  // prints 0 (false) because 3 is greater than 1, so the negation makes it false
//     cout << ((3 > 1) || (5 > 2)) << endl; // prints 1 (true) because at least one of the conditions is true (3 > 1 is true and 5 > 2 is also true)
//     cout << ((3 > 1) && (5 > 2)) << endl; // prints 1 (true) because both conditions are true (3 > 1 is true and 5 > 2 is also true)
//     cout << ((3 > 1) && (5 < 2)) << endl; // prints 0 (false) because the first condition is true but the second condition is false, so the AND operation results in false  
    
//     return 0;           
// }


// ques 1 : Write a program to take two numbers as input from the user and print their sum.
// int main()
// {
//     int a ;
//     int b ;
//     int sum ;

//     cout << "enter the first number : ";
//     cin >> a ;

//     cout << "enter the second number : ";
//     cin >> b ;

//     sum = a + b ;

//     cout << "the sum is = " << sum << endl;
//     return 0;       
// }


// int main()
// {
//     int a = 20 ;
//     int b = a++ ; // assign hoga like b ki value a ke equal ho jaegi uske baad a ki value update hogi +1 se  
//     cout << "b = " << b << endl; // 20
//     cout << "a = " << a << endl; // 21
    
//     int c = 10 ;
//     int d = ++c ; // update hogi c ki value +1 se then assign hoga d ki value c ke equal ho jaegi
//     cout << "c = " << c << endl; // 11
//     cout << "d = " << d << endl; // 11
//     return 0;
// }


// int main()
// {
//     int a = 20 ;
//     int c = 10 ;

    
//     int b = a-- ; // assign hoga like b ki value a ke equal ho jaegi uske baad a ki value update hogi +1 se  
//     cout << "b = " << b << endl; // 20
//     cout << "a = " << a << endl; // 21
    
//     int d = --c ; // update hogi c ki value +1 se then assign hoga d ki value c ke equal ho jaegi
//     cout << "c = " << c << endl; // 11
//     cout << "d = " << d << endl; // 11
//     return 0;
// }

