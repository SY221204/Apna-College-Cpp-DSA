//WAP to find the Factorial of anumber entered by the user.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter you number: ";
    cin>>n;
    int fact = 1;

    for(int i = n ; i >= 1 ; i--){
        fact = fact * i;
        
    }

    cout<<"Factorial is: "<<fact<<endl;

    return 0;
}