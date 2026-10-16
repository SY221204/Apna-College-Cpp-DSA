#include <iostream>
using namespace std;

int digitSum(int n){
    int res = 0;

    while(n>0){
        res = res + n % 10;
        n = n/10;
    }
    return res;
}

int main(){
    int n;
    cout << "Enter a number to find the sum of its digits: ";
    cin >>n;

    if(n<0){
        cout << "Please enter a natural number." <<endl;
    }
    else{
        cout << "sum of the digits of " << n << " is: " << digitSum(n) <<endl;
    }

    return 0;
}