#include <iostream>
using namespace std;


// uestion5 : For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg:371isanarmstrongnumber.3*3*3+7*7*7+1*1*1=371

/* int main(){
    int n;
    cout<<"Enter a 3 digit number : ";
    cin>>n;

    int num = n;

    int digit1 = num % 10;  // %10 means last digit  and % always gives the remainder.
    num /= 10;              // /10 means remove last digit. '/' with int performs integer division, discarding the decimal part.
    int digit2 = num % 10;
    num /= 10;
    int digit3 = num;

    int cubesum = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;

    if (cubesum == n){
        cout<<n<<" Is a Armstrong Number \n ";
    }
    else{
        cout<<n<<" Is not a Armstrong Number \n";
    }

    return 0;

} */