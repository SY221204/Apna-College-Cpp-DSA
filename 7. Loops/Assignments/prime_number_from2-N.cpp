// Question 4

// For a positive N, WAP that prints all the prime numbers from 2 to N.

// (Assume N ≥ 2)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        int curr = i;  //current number to check
        bool isPrime = true;

        for(int j = 2; j * j <= curr; j++) {
            if(curr % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << curr << endl;
        }
    }

    return 0;
}