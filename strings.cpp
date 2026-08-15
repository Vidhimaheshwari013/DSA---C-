#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

// creating character array
// int main() {
//     char str[] = {'a','b','c','\0'} ;
//     char str1[] = "hello" ;

//     cout << str << endl;
//     cout << strlen(str1) << endl;

//     return 0;
// }

// Input 
// int main() {
//     char str[50] ;
//     cout << "Enter char array: " ;
//     // cin >> str ; // it will take input until space is encountered
//     cin.getline(str, 50, '@') ; // it will take input until new line is encountered
//     cout << str << endl; 

//     return 0 ;
// }


// Output - char array output as integer array.
// int main () {
//     char str[12] ;
//     cout << "Enter char array: " ;
//     cin.getline(str, 50) ;

//     for (char c : str) {
//         cout << c << " " ; 
//     }
//     cout << endl;
//     return 0 ;
// }


// String class in C++
// int main() {
//     string str = "Hello World" ; // dynamic -- runtime resizable
//     cout << str << endl;
    
//     string str1 = "apna" ;
//     string str2 = "college" ;

//     string str3 = str1 + " " + str2 ; // concatenation 
//     cout << str3 << endl;
//     return 0 ;
// }

// // reverse a string
// int main() {
//     string str = "Hello World" ; 

//     cout << str[0] << endl;
//     cout << str[10] << endl;
//     // reverse(str.begin(), str.end()) ;
//     // cout << str << endl;

//     return 0 ;
// }


// reverse a string using 2 pointer approach
// void reverseString(vector<char>& s) {
//         int st = 0 , end = s.size()- 1;
//         while(st < end) {
//             swap(s[st], s[end]) ;
//             st++ ;
//             end-- ;
//         }
        
// }

// int main (){
//     vector<char> str = {'h','e','l','l','o'} ;
//     reverseString(str) ;
//     for (char c : str) {
//         cout << c << " " ; 
//     }
//     cout << endl;
//     return 0 ;
// }

// valid palindrome
// bool isAlphanumeric(char ch) {
//         if (( ch >= '0' && ch <= '9') || 
//         (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
//             return true ;
//         }
//         return false ;

//     }

//     bool isPalindrome(string s) {
//         int st = 0 , end = s.length()-1;
//         while (st < end) {
//             if(!isAlphanumeric(s[st])) {
//                 st++;
//                 continue;
//             }

//             if (!isAlphanumeric(s[end])) {
//                 end--;
//                 continue ;
//             }

//             if(tolower(s[st]) != tolower(s[end])){
//                 return false;
//             }
//             st++ , end--;
//         }
//         return true ;
// }

// int main() {
//     string str = "racecar" ;
//     cout << isPalindrome(str) << endl;

//     return 0 ;
// }


// remove all occurrences of a given character from string
// string removeOccurrences(string s, string part) {
//         while (s.length()> 0 && s.find(part) < s.length()) {
//             s.erase(s.find(part),part.length()) ;
//         }
//         return s;
//     }

// int main() {
//     string str = "daabcbaabcbc" ;   
//     string part = "abc" ;
//     cout << removeOccurrences(str, part) << endl;

//     return 0 ;
// }


// permutation in string
// bool isFreqsame(int freq1[], int freq2[]){
//         for (int i = 0 ; i < 26 ; i++){
//             if (freq1[i] != freq2[i]){
//                 return false ;
//             }
//         }
//         return true ;
//     }
//     bool checkInclusion(string s1, string s2) {
//         int freq[26] = {0}; 
//         for (int i = 0; i < s1.length(); i++) {
//             freq[s1[i] - 'a']++ ;
//         }

//         int windSize = s1.length() ; 

//         for (int i = 0 ; i < s2.length(); i++) {
//             int windIdx = 0 , idx = i ;
//             int windFreq[26] = {0} ;

//             while (windIdx < windSize && idx < s2.length()) {
//                 windFreq[s2[idx] - 'a']++ ;
//                 windIdx++ ; 
//                 idx++ ;
//             }

//             if (isFreqsame(freq, windFreq)) {
//                 return true ;
//             }
//         }
        
//         return false ;
// }

// int main() {
//     string str1 = "ab" ;
//     string str2 = "eidbaooo" ;
//     cout << checkInclusion(str1, str2) << endl;

//     return 0 ;
// }


// reverse words in a string
// string reverseWords(string s) {
//         int n = s.length();
//         string ans = "" ;

//         reverse(s.begin(), s.end());
        
//         for (int i = 0 ; i < n ; i++){
//             string word = "" ;
//             while (i < n && s[i] != ' ' ){
//                 word += s[i] ; i++ ;
//             }

//             reverse(word.begin() , word.end()) ;
//             if(word.length() > 0) {
//                 ans += " " + word ;
//             }

//         }
//         return ans.substr(1);        
// }

// int main() {
//     string str = "the sky is blue" ;
//     cout << reverseWords(str) << endl;

//     return 0 ;
// }


// string compression
int compress(vector<char>& chars) {
        int idx = 0 ;
        int n = chars.size() ;

        for (int i = 0 ; i < n ; i++){
            char ch = chars[i];
            int count = 0 ;

            while (i < n && chars[i] == ch) {
                count++ ;
                i++ ;
            }

            if (count == 1) {
                chars[idx++] = ch ;
            }

            else {
                chars[idx++] = ch ;
                string str = to_string(count) ;
                for(char dig : str) {
                    chars[idx++] = dig ;
                }
            }
            i-- ;
        }
        chars.resize(idx);
        return idx ;
}

int main() {
    vector<char> str = {'a','a','b','b','c','c','c'} ;
    int newLength = compress(str) ;
    cout << "New length: " << newLength << endl;
    for (char c : str) {
        cout << c << " " ; 
    }
    cout << endl;
    return 0 ;
}
