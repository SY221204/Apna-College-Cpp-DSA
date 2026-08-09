#include <iostream>
using namespace std;

// Question using While Loop
// Print the sum of digits of a number by using while loop

int main (){
    int n;
    cout<<"Enter Your numbeer n : ";
    cin>>n;

    int sum = 0;
    while(n > 0){
       int lastdigit= n % 10;
       cout<<lastdigit<<" ";
       sum = sum + lastdigit;
       n = n/10;
    }
    cout<<"Sum of these numbers are = "<<sum<<endl;
    return 0;

}
