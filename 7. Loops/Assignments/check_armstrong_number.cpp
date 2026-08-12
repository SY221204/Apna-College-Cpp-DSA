//Question 3

//WAP to input a number and check whether the number is an Armstrong number or not.**

//An Armstrong number is a number that is equal to the sum of cubes of its digits.**


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter you number: ";
    cin>>n;
    int i = n ;
    int cubesum = 0 ;


    while(i > 0){
        int lastdigit = i % 10;
        cubesum  = cubesum + lastdigit*lastdigit*lastdigit;
        i = i /10;

    }

    if (n == cubesum){
        cout<<n<<" is a Armstrong Number."<<endl;

    }

    else{
        cout<<n<<" is not a Armstrong Number"<<endl;
    }

    return 0;
    
}