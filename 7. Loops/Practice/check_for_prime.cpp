#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter you number (except '1') : ";
    cin>>n;
    bool isPrime = true;

    for(int i = 2; i <= n-1; i++ ){     // here we can also write "i <=sqrt(n)".  in place of "i <+ n-1" 
        if(n % i == 0){       //i is a factor of n; i completely divides n; n is a non prime;
            isPrime = false;
            break;

        }
    }
    if(isPrime == true){
        cout<<"Entered number is a Prime number "<<endl;

    }
    else{
        cout<<"Entered number is not a Prime number"<<endl;
    }

    return 0;
}