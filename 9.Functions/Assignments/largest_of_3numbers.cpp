#include <iostream>
using namespace std;

void largest(int a, int b, int c){
    if(a>b && a>c){
        cout << "Largest number is : "<<a<<endl;
    }
    else if(b>a && b>c){
        cout << "Largest number is : " <<b<<endl;
    }
    else{
        cout << "Largest number is : "<< c <<endl;
    }

}

int main(){
    int a;
    int b;
    int c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    largest(a, b, c);
    return 0;
}