#include <iostream>
using namespace std;

//Question1 : In a program, input the side of a square. 
// You have to output the area of the square. 

Input : n (side) 
Output : n * n (area)

int main(){
    float side;
    cout<<"Enter side of square : ";
    cin>>side;

    int area = side * side;
    cout<<"Area of square is : "<<area<<endl;
    return 0;
}