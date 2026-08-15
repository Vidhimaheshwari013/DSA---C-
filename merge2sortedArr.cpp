#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

// merge 2 sorted arrays into a single sorted array
void mergeSortedArr(vector<int>&A , vector<int>& B, int m, int n){
    int idx = m+n-1;
    int i = m-1 , j = n-1 ;

    while(i>=0 && j>=0) {
        if (A[i] >= B[j]) {
            A[idx--] = A[i--] ;
        }
        else {
            A[idx--]= B[j--];
        }
    }

    while (j>=0) {
        A[idx] = B[j] ;
        idx-- ;
        j-- ;
    }
}

int main() {
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {2,5,6};
    int m = 3, n =3 ;

    mergeSortedArr(A,B, m ,n);

    for (int i=0; i<A.size(); i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}
