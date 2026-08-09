#include <iostream>
using namespace std;

// Print the sum of odd digits of a number using while Loop
int main (){
    int n;
    cout<<"Enter Your numbeer n : ";
    cin>>n;

    int sum = 0;
    while(n > 0){
       int lastdigit= n % 10;
       cout<<lastdigit<<" ";
       if(lastdigit % 2 !=0){
        sum += lastdigit;
       }
       n = n/10;
    }
    cout<<"Sum of these numbers are = "<<sum<<endl;
    return 0;

}
