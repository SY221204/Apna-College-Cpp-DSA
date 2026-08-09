#include <iostream>
using namespace std;

//Question3:Build a Simple Interest Calculator
//Input: principal(P),rate(R),time(T)
//Output: (P*R*T)/100

int main(){
    float Principal;
    float Rate;
    float Time;

    cout<<"Enter Principal ammount : ";
    cin>>Principal;
    cout<<"Enter Rate of interest : ";
    cin>>Rate;
    cout<<"Enter Time : ";
    cin>>Time;

    float SI = Principal * Rate * Time / 100;
    cout<<"Simple interest is : "<<SI<<endl;
    return 0;
}