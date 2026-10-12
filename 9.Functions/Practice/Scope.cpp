#include <iostream>
using namespace std;

int num = 10; //global Scope variable


void sum(int a, int b){
    cout<< num <<endl; //global variable can be accessed inside the function
    int s = a+b;
    cout<<"Sum is: "<<s<<endl;
}

int main(){
    sum(5,10);
    //int s = 20; //local scope variable
    cout<< num<<endl; //global variable can be accessed inside the function
    return 0;
}