#include <iostream>
using namespace std;

//Question4: Write a program to calculate the area of a circle. 
//Input: r (radius) Output: PI * r * r (area)

int main(){
    float radius;
    cout<<"Enter value of radius : ";
    cin>>radius;

    float area = 22/7 * radius * radius;
    cout <<"Area of circle is : "<<area<<endl;
    return 0;
}