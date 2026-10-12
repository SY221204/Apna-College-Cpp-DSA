#include <iostream>
using namespace std;

// Question 1: write a function to find the product of two number - a and b.
// we can use both int and float data types for this function. hum yahan float data type ka use karenge taki hum decimal values bhi le sakein. 

// float product(float a, float  b){
//     float multiply = a*b;
//     return multiply;
// }

// int main(){
//     float a;
//     float b;
//     cout<<"Enter value of a: ";
//     cin>>a;
//     cout<<"Enter value of b: ";
//     cin>>b;

//     float multiply = product(a, b);
//     cout<<"Product of a and b is: "<<multiply<<endl; 
//     return 0;
// }

//           OR 

// int product(int a, int b){
//     return a*b;
// }
// int main(){
//     cout<<"Product is: "<<product(22, 12)<<endl;
//     return 0;
// }

// Question 2: write a function to print a number is odd or even.

//even > true and odd > false
// bool isEven(int n){
//     if(n%2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// // value of true is 1 and value of false is 0.
// int main(){
//     cout<<isEven(22)<<endl;
//     return 0;
// }


// Question 3: write a function to print the factorial of a number n.

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"Fcactorial of "<< n <<" is: "<<fact<<endl;
    return fact;
}

int main(){
    factorial (9);
    return 0;
}