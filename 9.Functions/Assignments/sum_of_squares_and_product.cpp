// Question: WAF which takes 2 numbers as parameters (a & b) and Outputs : a^2 + b^2 + a*b. 

#include <iostream>
using namespace std;

int calculate(int a , int b){
    int result = (a*a) + (b*b) + (a*b);
    return result;
}

int main(){
    int a;
    int b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    int answer = calculate(a,b);
    cout<< "Result of (a^2 + b^2 + a*b) is: "<<answer<<endl;
    return 0;
}