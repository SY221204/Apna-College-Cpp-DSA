// Question: Write a function to check if a number is plaindrome in C++.

#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int originalNum =  n;
    int reversedNum = 0;

    while(n>0){
        int lastDigit = n%10;
        reversedNum = reversedNum * 10  + lastDigit;
        n = n/10;
    }
    return originalNum == reversedNum;

}

int main(){
    int n;
    cout << "Enter a number to check if it is a palindrome or not: ";
    cin >> n;
    

    if(isPalindrome(n)){
        cout << "Palindrome" <<endl;
    }
    else{
        cout << "Not a Palindrome" <<endl;
    }

    return 0;
}
