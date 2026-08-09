#include <iostream>
using namespace std;

int main(){
    int eng;
    int sci;
    int math;

    cout<<"Enter english marks : ";
    cin>>eng;

    cout<<"Enter science marks : ";
    cin>>sci;                           

    cout <<"Enter maths marks : ";
    cin>>math;

    int avg = (eng + sci + math)/3;
    cout<<"Average marks is : "<<avg<<endl;

    return 0;
    
}