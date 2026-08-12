// WAP to print the multiplication table of a number, entered by the user.


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter you number: ";
    cin>>n;
    
    for(int i = 1; i <=10; i++){
        cout<< n << " x "<< i << " = "<< i * n <<endl;
    }

    return 0;
}    