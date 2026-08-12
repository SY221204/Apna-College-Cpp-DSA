// ### Question 5

// **For a positive N, WAP that prints the first N Fibonacci numbers.**

// **(Assume N ≥ 2)**

// **Fibonacci series:**

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

// This is a series where each number is a sum of the previous 2 numbers in the series.

// **Examples:**

// 1 = 0 + 1
// 2 = 1 + 1
// 3 = 1 + 2
// 5 = 2 + 3
// 8 = 3 + 5
// & so on.



#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter you number: ";
    cin>>n;
    int first = 0 ;
    int second = 1;

    for (int i = 2 ; i<n ; i++){
        int third = first + second;
        cout<<third<<" ";
        first = second ;
        second = third; 
    }
    

    return 0;
}