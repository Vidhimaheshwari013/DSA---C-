#include <iostream>
using namespace std;

// int main() {
//     int a= 10 ;
//     int *ptr = &a; // pointer to int initialized to address of a
//     int **ptr2 = &ptr; // pointer to pointer initialized to address of ptr

//     cout << "a : " << a << endl;
//     cout << "ptr : " << ptr << endl; 
//     cout << "ptr2 : " << ptr2 << endl;
//     cout << endl ;
    
//     cout << "&a : " <<  &a << endl; // address of a
//     cout << "&ptr : " <<  &ptr << endl; // address of ptr
//     cout << "&ptr2 : " << &ptr2 << endl; // address of ptr2
//     cout << endl ;
    
//     cout << "*ptr : " << *ptr << endl; // dereferencing the pointer to get the value of a
//     cout << "*ptr2 : " << *ptr2 << endl; // dereferencing the pointer to pointer to get the address of ptr   
//     cout << "**ptr2 : " << **ptr2 << endl; // dereferencing the pointer to pointer to get the value of a   
//     cout << endl ;

//     cout << "*(&a): " << *(&a) << endl;
//     cout << "*(ptr) : " << *(ptr) << endl;
//     cout << "*(ptr2) : " << *(ptr2) << endl;
//     cout << "**(ptr2) : " << **(ptr2) << endl; 


//     return 0;
// }


// // pass by value 
// int changeA(int a) {
//     a = 20 ;
//     return a ;
// }

// int main() {
//     int a = 10 ;

//     cout << changeA(a) <<  endl ;

//     cout << "in main func : " << a <<  endl; 
//     return 0 ;
// }


// // pass by reference using pointers
// int changeA(int *ptr) {
//     *ptr = 20 ;
// }

// int main() {
//     int a = 10 ;

//     cout << "before calling the func : " << a << endl ;
//     changeA(&a) ;

//     cout << "after calling the value in main func : " << a <<  endl; 
//     return 0 ;
// }


// // pass by reference using references
// int changeA(int &b) {
//     b = 20 ;
// }

// int main() {
//     int a = 10 ;

//     changeA(a) ;

//     cout << "in main func : " << a <<  endl; 
//     return 0 ;
// }


// array pointer 
// int main () {
//     int arr[] = {1,2,3,4,5} ;

//     cout << arr << endl; // gives the address of 0th index
//     cout << *arr << endl ; // the value at adress of 0th index
//     cout << &(arr[0]) << endl; // gives the address of value at 0th index

//     return 0 ;
// }


// pointer airthmetic 
// increment and decrement
// int main (){
//     int a = 10 ;
//     int *ptr = &a ;

//     cout << ptr << endl ; // 08
    
//     ptr++ ;  // +4
//     cout << ptr << endl; // increment-  09, 10(a) , 11(b), 12(c)
    
//     // ptr-- ; // -4
//     // cout << ptr << endl ;// decrement - 07, 06, 05, 04 
   
//     return 0 ;
// }


// // ADD and SUBSTRACT
// int main() {
//     int a = 10 ;
//     int *ptr = &a;

//     cout << ptr << endl;
    
//     ptr = ptr + 2 ;
//     cout << ptr ;
// }


// // array pointer increment 
// int main () {
//     int arr [] = {1,2,3,4,5} ;
    
//     cout << *arr << endl ;
//     cout << *(arr+1) << endl ;
//     cout << *(arr+2) << endl ;
//     cout << *(arr+3) << endl ;
//     cout << *(arr+4) << endl ;

//     return 0 ;
// }


// substraction of pointers 
// int main () {
//     int *ptr2 ; // example ptr2 stores vale 100
//     int *ptr1 = ptr2 + 2 ; // so value in ptr1 will be 100 + 2 integer (8) =  108

//     cout << ptr1 - ptr2 ; // 108-100 = 8 bytes (2)
//     return 0 ;
// }


// // comparison of pointers
// int main () {
//     int *ptr1 ;
//     int *ptr2 ;

//     int *ptr3 = ptr2 ;

//     cout << ptr1 << endl ;
//     cout << ptr2 << endl ;

//     cout << (ptr1 < ptr2) << endl ; // 1
//     cout << (ptr3 == ptr2) << endl ; // 1
//     cout << (ptr3 != ptr2)<< endl ;// 0
    

//     return 0 ;
// }

// ques. predict the output.
// int main () {
//     int arr[] = {10,20,30,40} ;
//     int *ptr = arr;

//     cout << *(ptr + 1 ) << endl ;
//     cout << *(ptr + 3) << endl ;

//     ptr++ ;
//    cout <<*ptr << endl ;

//    return 0 ;
// }
