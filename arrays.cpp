// arrays 
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// //basic creation of array and accessing the values
// int main() 
// {
//     int marks[5] = {99, 98, 78, 85, 90} ;
//     cout << marks[0]<< endl ;
//     cout << marks[1]<< endl ;
//     cout << marks[2]<< endl ;
//     cout << marks[3]<< endl ;
//     cout << marks[4]<< endl ;

//     return 0;
// }
 

// // size of array
// int main() 
// {
//     int marks[5] = {99, 98, 78, 85, 90} ;
//     cout << "Size of the array: " << sizeof(marks) / sizeof(int) << endl;

//     return 0;
// }


// // loops on array
// int main ()
// {
//     int marks[5] = {99,100,78,85,90} ;
//     int size = 5 ;

//     for (int i = 0 ; i < size ; i++){
//         cout << marks[i] << endl; 
//     }
// }


// //input of array uisng loops
// int main ()
// {
//     int marks[5] ;
//     int size = 5 ;

//     cout << "Enter the marks of students: " << endl;
//     for (int i = 0 ; i < size ; i++){
//         cin >> marks[i];
//     }

//     cout << "The marks are: " << endl;
//     for (int i = 0 ; i < size ; i++){
//         cout << marks[i] << " " ;
//     }

//     return 0;
// }


// // find smallest in an array
// int main () 
// {
//     int nums[] = {5, 15, 22, 1, -15, 24} ;
//     int size = 6 ;

//     int smallest = INT_MAX;

//     for (int i = 0 ; i < size ; i++) {
//         if (nums[i] < smallest)
//             smallest = nums[i];
//         else
//             continue; 
//     }
//     cout << "The smallest number in the array is: " << smallest << endl;
//     return 0 ;
// }


// // find largest in an array
// int main () 
// {
//     int nums[] = {5, 15, 22, 1, -15, 24} ;
//     int size = 6 ;

//     int largest = INT_MIN;

//     for (int i = 0 ; i < size ; i++) {
//         if (nums[i] > largest)
//             largest = nums[i];
//         else
//             continue; 
//     }
//     cout << "The largest number in the array is: " << largest << endl;
//     return 0 ;
// }


// // print the index of smallest value in an array
// int main () 
// {
//     int nums[] = {5, 15, 22, 1, -15, 24} ;
//     int size = 6 ;

//     int smallest = INT_MAX;

//     for (int i = 0 ; i < size ; i++) {
//         if (nums[i] < smallest)
//             smallest = i;
//     }
//     cout << "The smallest number in the array is: " << smallest << endl;
//     return 0 ;
// }


// // find largest in an array
// int main () 
// {
//     int nums[] = {5, 15, 22, 1, -15, 24} ;
//     int size = 6 ;

//     int largest = INT_MIN;

//     for (int i = 0 ; i < size ; i++) {
//         if (nums[i] > largest)
//             largest = i;
//         else
//             continue; -
//     }
//     cout << "The largest number in the array is: " << largest << endl;
//     return 0 ;
// }


// // pass by reference
// void changeArr(int arr[], int size) 
// {
//     for (int i = 0; i < size; i++) {
//         arr[i] = 2* arr[i] ; // multiply each element by 2
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3} ;
//     int size = 3 ;
    
//     changeArr(arr, size);
//     cout << "Modified array: ";
//     for (int i = 0; i < size; i++) { // to print the array
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0 ;

// }


// // ques. to find a number in an array if found then print its index else print -1.
// int linersearch(int arr[] , int size , int target)
// {
// for (int i = 0 ; i < size ; i++)
//     {
//         if (arr[i] == target) {
//             return i; //
//         }
//     }
//    return -1 ;
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5} ;
//     int size = 7 ;
//     int target = 5 ;

//     cout << linersearch(arr, size, target) ;
//     return 0;
// }


// // reverse an array
// void reverseArray(int arr[], int size)
// {
//     int start = 0 ;
//     int end = size - 1 ;

//     while (start <= end){
//         swap(arr[start], arr[end]) ;
//         start++ ;
//         end-- ;
//     }
// }

// int main() {
//     int arr[] = {4,2,7,8,1,2,5} ;
//     int size = 7 ;

//     reverseArray(arr, size) ;

//     for (int i = 0 ; i < size ; i++){
//         cout << arr[i] << " " ;
//     }
// return 0 ;
// }


// // calculate the sum of elements of array.
// int sumArr(int arr[], int size)
// {
//     int sum = 0 ;
//     for (int i = 0 ; i < size ; i++){
//         sum = sum + arr[i] ;
//     }
// return sum ;
// }

// int main()
// {
//     int arr[] = {1,2,3,7,8,5} ;
//     int size = 6 ;

//     cout << sumArr(arr, size) << endl ;
//     return 0 ;
// }


// // calculate the product of elements of array.
// int productArr(int arr[], int size)
// {
//     int product = 1;
//     for (int i = 0 ; i < size ; i++){
//         product = product * arr[i] ;
//     }
// return product ;
// }

// int main()
// {
//     int arr[] = {1,2,3,7,8,5} ;
//     int size = 6 ;

//     cout << productArr(arr, size) << endl ;
//     return 0 ;
// }


// // // waf to swap the max and min num of an array.
// void swapMaxMin(int arr[], int size) {
//     int maxIndex = INT_MIN;
//     int minIndex = INT_MAX;

//     // Find indices of max and min elements
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > arr[maxIndex])
//             maxIndex = i;
//         if (arr[i] < arr[minIndex])
//             minIndex = i;
//     }

//     // Swap using built-in swap function
//     swap(arr[maxIndex], arr[minIndex]);
// }

// int main() {
//     int arr[] = {5,6,1,2,8,9,7};
//     int size = 7;
    
//     swapMaxMin(arr, size);

//     cout << "Array after swapping max and min: ";
//     for (int i = 0; i < size; ++i)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }


// // print the unique values in an array.
// void printUnique(int arr[], int size) {    
//     for (int i = 0; i < size; i++) {
//         int count = 0;

//         // Compare arr[i] with every element in the array
//         for (int j = 0; j < size; j++) {
//             if (arr[i] == arr[j])
//                 count++;
//         }

//         // If the element appears only once
//         if (count == 1) {
//             cout << arr[i] << " ";
//         }
//     }

//     cout << endl;
// }

// int main() {
//     int arr[] = {3, 5, 2, 3, 7, 5, 8, 7, 5, 2};
//     int size = 10 ;

//     printUnique(arr, size);

//     return 0;
// }


// // print the intersection of two arrays.
// void printintersection(int arr1[], int arr2[], int size1, int size2) 
// {
//     for (int i = 0 ; i < size1 ; i++) {
//         for (int j = 0 ; j < size2 ; j++) {
//             if (arr1[i] == arr2[j])
//             cout << arr1[i] << " " ;
//         }
//     }
// }

// int main () 
// {
//     int arr1[] = {1,2,3,4,5,6,8} ;
//     int arr2[] = {6,7,3,1} ;

//     int size1 = 7 ; 
//     int size2 = 4 ;

//     printintersection(arr1, arr2, size1, size2) ;

//     return 0 ;
// }
