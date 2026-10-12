#include <iostream>
using namespace std;

int sum(int a , int b){   //a, b are parametres
    int sum = a+b;
    return sum;
}

int substract(int a, int b){
    int sub = a-b;
    return sub;
}

int multiply(int a, int b){
    int mul = a*b;
    return mul;
}

int divide(int a, int b){
    int div = a/b;
    return div;
}

int main(){
   int add = sum(2, 4);  //2, 4 are arguments
    cout<<"Addition = "<<add<<endl;

    int sub = substract(4, 2);
    cout << "subtraction = "<<sub<<endl;

    int mul = multiply(2, 4);
    cout << "multiplication = "<<mul<<endl;    

    int div = divide(220, 30);
    cout << "division = "<<div<<endl;
    return 0;

}
