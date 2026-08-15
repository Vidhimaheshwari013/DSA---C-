#include <iostream>
using namespace std;
int main() 

// // SQUARE PATTERNS
// // printing square pattern of numbers and stars. 1st value same of each row.
// {
//     int n = 4;
//     for (int i =1 ; i<=n ; i++) // outer loop
//     {
//         for (int j = 1 ; j<=n ; j++) // inner loop
//         {
//            // cout << "*" << " ";
//             cout << j << " " ;

//         }
//         cout << endl;
//     }
// }


// // printing square pattern of alphabets. 1st value same of every row
// {
//     int n = 4;
//     for (int i = 0; i < n; i++) // outer loop 
//     {
//         char ch = 'A' ;       // here char = A is defined in inner loop so that every next line strts with A 
//         for (int j=0 ; j<n ; j++) {
//             cout << ch << " " ;
//             ch = ch + 1 ;  // A (65) + 1 = B (66)
//         }
//         cout << endl; 
//     }
// return 0;
// }


// printing square pattern of numbers. 1st value different of every row
// {
//     int n = 3;
    
//     int num = 1;     // here num = 1 is defined before outer loop so that the updation value is used in rows.... not starting with 1 always
//     for(int i =0 ; i < n ; i++) 
//     {
//         for (int j = 0 ; j < n ; j++)
//         { 
//             cout << num << " " ;
//             num ++ ;
//         }
//         cout << endl;

//     }
//     cout << "last updated value : " << num << endl;
//     return 0;
// } 


// // printing square pattern of alphabets. 1st value different of every row
// {
//     int n = 5;
    
//     char ch = 'A';     // here num = 1 is defined before outer loop so that the updation value is used in further rows.... not starting with A always
//     for(int i =0 ; i < n ; i++) 
//     {
//         for (int j = 0 ; j < n ; j++)
//         { 
//             cout << ch << " " ;
//             ch = ch + 1; 
//         }
//         cout << endl;

//     }
//     cout << "last updated value : " << ch << endl;
//     return 0;
// } 


// // TRIANGLE PATTERNS
// // printing triangle pattern of stars.
// {
//    int n = 4;
//     for (int i = 0 ; i < n ; i++)
//     { 
//         for (int j = 0 ; j < i+1 ; j++)
//         {
//             cout << "*" << " " ;
//         }
//     cout << endl;
//     } 
// }


// // printing triangle pattern of numbers (same number in one line)
// {
//     int n = 8;
//     int num = 1;
    
//     for (int i = 0 ; i < n ; i++) {
//         for (int j=0 ; j < i+1 ; j++){
//             cout << num << " " ;   }
//         num++ ;
//         cout << endl ;
//     }
//     return 0 ;
// }

// OR
// {
//     int n = 4 ;
    
//     for (int i = 0 ; i < n ; i++) {
//         for (int j=0 ; j < i+1 ; j++){
//             cout << (i+1) << " " ;   
//         }
//         cout << endl ;
//     }
// }


// // printing triangle pattern of alphabets (same alphabet in one line)
// {
//     int n = 8;
//     char ch = 'A';
    
//     for (int i = 0 ; i < n ; i++) {
//         for (int j=0 ; j < i+1 ; j++){
//             cout << ch << " " ;   }
//         ch += 1 ;
//         cout << endl ;
//     }
//     return 0 ;
// }


// // printing triangle pattern of numbers (diff number in one line)
// {
// int n = 8;
    
    
//     for (int i = 0 ; i < n ; i++) {
        
//         int num = 1;
//         for (int j=0 ; j < i+1 ; j++){
//             cout << num << " " ;   
//             num++ ;}
            
//         cout << endl ;
//     }
//     return 0 ;
//}


// // backward loop 
// {
//     int n = 5 ;

//     for (int i = n ; i>0 ; i--){
//     cout << i << endl ;
//     }
// return 0 ;
// }


// // printing triangle pattern of numbers (diff number in one line -- reverse order)
// {
//     int n = 4;
    
    
//     for (int i = 0 ; i < n; i++) {
        
//         for (int j = i+1 ; j > 0 ; j--)
//         {
//             cout << j << " " ;   
//         }
            
//         cout << endl ;
//     }
//     return 0 ;
// }


// // Floyd's Triangle Pattern for numbers
// {
//     int n = 4 ;

//     int num = 1 ;
//     for(int i = 0 ; i < n ; i++) 
//     { 
//         for (int j = i + 1 ; j >0  ; j--)
//         {
//             cout << num << " " ;
//             num++ ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }


// // printing triangle pattern of alphabets (diff alphabets in one line -- reverse order)
// {
//     int n = 4;
    
    
//     for (int i = 0 ; i < n; i++) {
        
//         char ch = 'A' + i; // 'A' + i gives the starting character for each row
//         for (int j = i+1 ; j > 0 ; j--)
//         {
//             cout << ch << " " ;
//             ch = ch - 1;    
//         }
            
//         cout << endl ;
//     }
//     return 0 ;
// }


// // Floyd's Triangle Pattern for alphabets
// {
//     int n = 4 ;
//     char ch = 'A'; 
//     for(int i = 0 ; i < n ; i++) 
//     { 
//         for (int j = i + 1 ; j >0  ; j--)
//         {
//             cout << ch << " " ;
//             ch = ch + 1 ; ;
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }


// // inverted triangle pattern of numbers
// {
//     int n = 4 ;

//     int num = 1 ;
//     for (int i = 0 ; i < n ; i++)
//     {
//         for (int j = 0 ; j < i ; j++)
//         {
//             cout << "  " ; // for spacing
//         }
//         for (int j = 0 ; j < n-i  ; j++) // here n-i gives the number of elements in each row
//         {
//             cout << num << " " ;
//         }
//         num ++ ;
//         cout << endl ;
//     }
// }


// inverted triangle pattern of alphabets
// {
//     int n = 4 ;
    
//     for (int i = 0 ; i < n ; i++)
//     {
//         char ch = 'A' + i; // 'A' + i gives the starting character for each row
//         for (int j = 0 ; j < i ; j++)
//         {
//             cout << "  " ; // for spacing
//         }
//         for (int j = 0 ; j < n-i  ; j++) // here n-i gives the number of elements in each row
//         {
//             cout << ch << " " ;
//         }
//         ch = ch + 1 ; // incrementing the character for next row
//         cout << endl ;
//     }
// }


// // pyramid pattern for numbers
// {
//     int n = 10;
//     for (int i = 0 ; i < n ; i++)
//     {
//         for( int j = 0 ; j < n-i-1 ; j++)
//         {
//             cout << " " ; // for spacing
//         }

//         for (int j = 1 ; j <= i+1 ; j++)
//         {
//             cout << j << " " ; // printing numbers in increasing order
//         }

//         for ( int j = i ; j > 0 ; j--)
//         {
//             cout << j << " " ; // printing numbers in decreasing order
//         }
//         cout << endl ;
//     }
// }


// // pyramid pattern for alphabets
// {
//     int n = 5;
//     for (int i = 0 ; i < n ; i++)
//     {
//         char ch = 'A' + i; // 'A' + i gives the starting character for each row
//         for( int j = 0 ; j < n-i-1 ; j++)
//         {
//             cout << "*" << " " ; // for spacing
//         }

//         for (int j = 1 ; j <= i+1 ; j++)
//         {
//             cout << ch << " " ; // printing numbers in increasing order
//         }

//         for ( int j = i ; j > 0 ; j--)
//         {
//             cout << ch << " " ; // printing numbers in decreasing order
//         }
//         cout << endl ;
//     }
// }


// // hollow diamnod pattern
// {
//     int n = 4 ;

//     for ( int i = 0 ; i < n ; i++)
//     {
//         // spaces 
//         for(int j = 0 ; j< n-i-1 ; j++)
//         {
//           cout << " " ;
//         }

//         // first star
//         cout << "*" ;
        

//         if ( i!= 0) {
//             // spaces in between
//             for (int j = 0 ; j < 2*i-1 ; j++)
//             {
//                 cout << " " ;
//             }
//             cout << "*" ; // second star

//         }
//     cout << endl ;
//     }

//     for (int i = 0 ; i <n-1 ; i++) // 0 to n-2 
//     {
//         // spaces
//         for (int j = 0 ; j<i+1 ; j++)
//         {
//             cout << " " ;
//         }

//         // first star
//         cout << "*" ;

//         if (i != n-2) {// to avoid printing spaces in last row{
//             // spaces in between
//             for ( int j = 0 ; j < 2*(n-i)-5 ; j++)
//             {
//                 cout << " " ;
//             }

//             // second star
//             cout << "*" ;

//         }
//     cout << endl ;
//    }
// }


// // butterfly pattern
// {
//     int n = 10  ;

//     // upper half
//     for (int i = 0 ; i<= n-1 ; i++)
//     {
//         //upper half
//         for (int j = 0 ; j <= i; j++)
//         {
//         cout << "*"; // first star
//         }

//         for (int j = 0 ; j < 2*(n-i-1) ; j++)
//         {
//             cout << " "; // spaces in between
//         }


//         for (int j = 0 ; j < i+1 ; j++)
//         {
//             cout << "*";
//         }
//     cout << endl ;
//     }

//     // lower half
//     for ( int i = 0 ; i <= n-1 ; i++)
//     {
//         //stars
//         for (int j = 0 ; j < n-i ; j++)
//         {
//             cout << "*" ;

//         }

//         // spaces in between
//         for (int j = 0 ; j < 2*i ; j++)
//         {
//             cout << " ";
//         }

//         // stars
//         for (int j = 0 ; j <n-i ; j++)
//         {
//             cout << "*" ;
//         }
//     cout << endl;
//     }
// }


