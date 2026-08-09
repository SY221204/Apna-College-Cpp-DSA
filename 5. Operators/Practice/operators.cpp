// Operator precedence
#include <iostream>
using namespace std;

int main(){
    // Arithmetic operators

    //Binary operators
    // int a = 22;
    // int b = 12;
    // cout << " + " <<(a + b) << endl;
    // cout << " - " <<(a - b) << endl;
    // cout << " * " <<(a * b) << endl;        
    // cout << " / " <<(a / b) << endl;
    // cout << " % " <<(a % b) << endl; //Modulo (remainder) 
    // return 0;

    //Unary operators
    // int a = 22;
    // a++; //increment
    // cout<<"a = "<<a<<endl;
    // a--; //decrement
    // cout<<"a = "<<a<<endl;

    // int b = a++; //post increment
    // cout<<"Value of b after post increment  = "<<b<<endl;
    // int c = ++a; //pre increment
    // cout<<"Value of c after pre increment = "<<c<<endl;
    // int d = a--; //post decrement
    // cout<<"Value of d after post decrement  = "<<d<<endl;
    // int e = --a; //pre decrement
    // cout<<"Value of e after pre decrement = "<<e<<endl;

    // Arithmetic operators with mixed data types
    // int a = 22;

    // a += 5; // a = a + 5
    // cout<<"a = "<<a<<endl;
    // a -= 5; // a = a - 5
    // cout<<"a = "<<a<<endl;
    // a *= 5; // a = a * 5
    // cout<<"a = "<<a<<endl;
    // a /= 5; // a = a / 5
    // cout<<"a = "<<a<<endl;

    // Relational operators
    // int a = 3;
    // int b = 5;
    // cout << (a > b) << endl; // false
    // cout << (a < b) << endl; // true
    // cout << (a >= b) << endl; // false
    // cout << (a <= b) << endl; // true
    // cout << (a == b) << endl; // false
    // cout << (a != b) << endl; // true

    // Logical operators
    cout << ((3 > 5) && (5 > 3))<<endl; // false
    cout << ((3 > 5) || (5 > 3))<<endl; // true
    cout << (!(3 > 5))<<endl; // true
    return 0; 
}