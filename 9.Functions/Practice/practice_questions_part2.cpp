#include<iostream>
using namespace std;

//Write a function to print if a  number is prime or not. 
// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }
    
//     // Method 1
//     for(int i=2; i<n-1; i++){
//         if(n%i ==0){ // non-prime number
//             return false;
//         }
//     }
//        return true;
// }


//     // Method 2

// bool isPrime2(int n){
//     if(n==1){
//         return false;
//     }

//     for(int i = 2; i*i <= n; i++){
//         if(n%i == 0){
//             return false; // non-prime number
//         }

//     }
//     return true;
// }
// int main(){
//     cout<<isPrime2(11)<<endl;
//     return 0; 
// }

//WAF to find the binomial coefficient for given n and r.
// int factorial (int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int binCoeff(int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);
//     int result = val1 / (val2*val3);
//     return result;
// }

// int main(){
//     cout<<binCoeff(4, 2)<<endl;
//     return 0;
// }


//question : Print all primes in a Range from 2 to n.
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void allPrimes(int n){
    for(int i = 2; i<=n; i++){
        if(isPrime(i)){ //true
            cout << i <<" ";
        }
    }

    cout << endl;
}

int main(){
    allPrimes(20);
    return 0;
}